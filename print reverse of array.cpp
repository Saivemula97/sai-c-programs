#include<stdio.h>
#define size 5
main()
{
	int a[size],i,temp;
	printf("enter %d integers",size);
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(i=0;i<size/2;i++)
	{
		temp=a[i];
	a[i]=a[size-i-1];
	a[size-i-1]=temp;
}
for (i=0;i<size;i++)
printf("%d \t",a[i]);
}
