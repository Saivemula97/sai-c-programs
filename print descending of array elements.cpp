#include<stdio.h>
main()
{
int a[100],i,j,n,temp;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{

	if(a[i]<a[j])
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}	
}
for(i=0;i<n;i++)
printf(" %d",a[i]);
}
