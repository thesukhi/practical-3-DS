#include <stdio.h>
int main () {
int a[10],n,i, j, pos, temp;
printf("Enter size of array\n");
scanf("%d",&n);

printf("Enter elements\n");
for (i = 0; i< n; i++) {
scanf("%d",& a[i]);
 }
for (i = 0; i < n-1; i++) {
pos=i;
for (j = i+1; j < n; j++) {
if (a[j] < a[pos]) {
pos = j;
}
}
if (pos != i) {
temp = a[pos];
a[pos] = a[i];
a[i] = temp;
}
}
}