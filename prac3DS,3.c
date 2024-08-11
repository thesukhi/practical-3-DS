#include <stdio.h>
int main() {
int a[10],num,n,i,found=0,low,mid,high;
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Entre number to be search\n");
scanf("%d", &num);
low=0;
high=n-1;
mid=(low+high)/2;
for(i=0;i<n;i++)
{
if(num==a[mid])
{
found=1;
printf("%d found at %d position", num, mid+1);
break;

}
if(num>a[mid])
{
low=mid+1;
}
if(num<a[mid])
{
high=mid-1;
}
mid=(low+high)/2;
}
if(found==0)
{
printf("%d not found", num);
}
 return 0;
}
