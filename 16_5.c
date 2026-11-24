#include<stdio.h>
  int main ()
  {
  	int a,b;
  	l: system("cls");
  	 printf("\n\n\n enter value of a and b");
  	scanf("%d%d",&a,&b);
  	if(b==0)
  	{
  		printf("value of b!=0...pls input again");
  		printf("\nPress any key to cintinue...");
  		getch();
  		goto l;
	  }
	  printf("%d is divided by %d=%d",a,b,a/b);
	  return 0;
  }