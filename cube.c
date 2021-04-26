#include<stdio.h>
#include<math.h>
void main()
{
	int n,c,m;
	printf("enter the number");
	scanf("%d",&n);
	c=cbrt(n);
	m=c*c*c;
	if(m==n)
	{
		printf("cube root of %d is %d\n",n,c);
	}
	
		
	else
	{
		printf("number is not perfect");
	}
	
	
}
