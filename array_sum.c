#include <stdio.h>
 int main ()
 {
 	int i,j,m,n;
 	printf ("enter row and colum of matrices");
 	scanf ("%d%d",&m,&n);
 	printf("Enter %d element for 1st Matrix: ", m*n);
 	int a[m][n],b[m][n],sum[m][n];
 	for (i=0;i<m;i++)
 	{
 		for (j=0;j<n;j++)
 		{
 			scanf("%d",&a[i][j]);
		 }
	 }
	 printf("Enter %d element for 2nd Matrix: ", m*n);
	 for(i=0;i<m;i++)
	 {
	 	for (j=0;j<n;j++) 
	 	{
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 for (i=0;i<m;i++)
	 {
	 	for (j=0;j<n;j++)
	 	{
	 		 sum[i][j]=a[i][j]+b[i][j];
		 }
	 }
	 printf("Sum of both Matrix\n");
	for (i=0;i<m;i++)
	 {
	 	for (j=0;j<n;j++)
	 	{
	 		 printf("%d ",sum[i][j]);
		 }printf("\n");
	 }
	 
	 
}