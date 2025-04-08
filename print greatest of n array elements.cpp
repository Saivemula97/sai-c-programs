#include<stdio.h>
main()
{
int a[100],i,n,greatest;
printf("enter number of elements");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
greatest=a[0];
for (i=1;i<n;i++)
{
if(a[i]>greatest)
greatest=a[i];
}
printf("%d",greatest);
}
