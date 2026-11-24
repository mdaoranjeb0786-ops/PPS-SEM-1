#include<stdio.h>
  int main ()
  {
  	int i,j,a[3][3];
  	printf("enter 9 elements one y one :");
  	for (i=0;i<3;i++)
  	{
  		for (j=0;j<3;j++)
  		{
  			scanf("%d",&a[i][j]);
		  }
	  }
	  printf ("your 9 element are\n");
	  for (i=0;i<3;i++)
	  {
	  	for (j=0;j<3;j++)
	  	{
	  		printf("%d ",a[i][j]);
		  }
		  printf("\n");
	  }
  }