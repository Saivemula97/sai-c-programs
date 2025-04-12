#include<stdio.h>
#define R 2
#define C 3
main()
{
float a[R][C],b[R][C],c[R][C];
int i,j;
printf("enter matrix 1\n");
for(i=0;i<R;i++)
for(j=0;j<C;j++)
scanf("%f",&a[i][j]);
printf("enter matrix 2\n");
for(i=0;i<R;i++)
for(j=0;j<C;j++)
scanf("%f",&b[i][j]);
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
		printf("%f \t",c[i][j]);
	}
	printf("\n");
}
}
