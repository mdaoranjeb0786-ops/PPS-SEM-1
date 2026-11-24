#include<stdio.h>
   void sum ( int,int);
   void sub(int,int);
   void mul(int,int);
   void divide(int,int);
   int main ()   
   {
   	int a, b;
   	printf("enter to number");
   	scanf("%d%d",&a,&b);
   	sum(a ,b);
   	sub(a,b);
   	mul(a,b);
   	divide(a,b);
   }
   void sum (int a,int b)
   {
   		printf("\nsum=%d",a+b);
   }
   void sub (int a,int b)
   {
   		printf("\nsub=%d",a-b);
   }
   void mul(int a,int b)
   {
		printf("\nmul=%d",a*b);
   }
   void divide (int a,int b)
   {
   		printf("\ndivide=%d",a/b);
   }