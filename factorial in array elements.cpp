#include<stdio.h>
void factorial(int);
main()
{
int a[5],i;
for(i=0;i<5;i++);
{
	printf("enter integer");
	scanf("%d",&a[i]);
	factorial(a[i]);
	
}
}
void factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	f*=1;
	printf("factorial is %d\n",f);
}
