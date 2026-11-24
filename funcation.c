#include<stdio.h>
 #include<ctype.h>
 #include<math.h>
 #include<string.h>
 int main()
 {
 	char c1='A',c2='b';
 	char str[]="aoranjeb";
 	int a=4,b=2;
 	int z=4;
 	
 	printf("\nlower=%c",tolower(c1)); 
 	printf("\nupper=%c",toupper(c2));
 	printf("\nlength= %d",strlen(str));
 	printf("\npow=%f",pow(a,b));
 	printf("\nsqrt=%f",sqrt(z));
 	 return 0;
 }