#include<stdio.h>
main()
{
int a[100],i,n,smallest;
printf("enter number of elements");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
smallest=a[0];
for (i=1;i<n;i++)
{
if(a[i]<smallest)
smallest=a[i];
}
printf("%d",smallest);
}
