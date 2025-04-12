#include<stdio.h>

void smallest(int a[], int n);
main()
{ 
	int a[100],i,n;
	printf("number of elements \n");
	scanf(" %d",&n);
	for(i=1;i<n;i++)
	{
	printf("enter integers");
	scanf("%d",&a[i]);
    }
	smallest(a);
}
void smallest(int a[])
{
	int n,i,small=a[0];
	for(i=1;i<n;i++)
     {
     	if(a[i]>small)
     	{
     		small=a[i];
     		
		 }
     }
     printf("%d",small);
}

