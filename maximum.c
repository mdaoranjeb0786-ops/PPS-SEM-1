 #include<stdio.h>
int main ()
{
	int n; 
	scanf("%d",&n);
	int a[n],i,mix;
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	mix=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]> mix)
		mix =a[i];
	}
	   printf("%d",mix);
	   return 0;
}

