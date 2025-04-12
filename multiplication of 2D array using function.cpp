#include<stdio.h>
#define R 2
#define C 2
void multi(int a[][C],int b[][C]);
main()
{
 int m1[R][C],m2[R][C],i,j;
 printf("entermatrix 1 \n");
 for(i=0;i<R;i++)
 for(j=0;j<C;j++)
 scanf("%d",&m1[i][j]);
 printf("enter matrix 2\n");
 for(i=0;i<R;i++)
 for(j=0;j<C;j++)
 scanf("%d",&m2[i][j]);
 multi(m1,m2);
}

void multi(int a[][C],int b[][C])
{
 int i,j,k,c[R][C];
  for(i=0;i<R;i++)
  {
  	for(j=0;j<C;j++)
  {
  c[i][j]=0;
  for(k=0;k<C;k++) 
  {
  
  	c[i][j]+=a[i][k]*b[k][j];
  }
  	printf("%d \t",c[i][j]);
  }
 printf("\n");
}
}


	
