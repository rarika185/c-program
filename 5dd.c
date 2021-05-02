#include<stdio.h>
void main()
{
	int n,s=0,d;
	printf("enter the number");
	scanf("%d",&n);
	if(n>=10000 && n<=99999)
	{
		while(n>0)
		{
			d=n%10;
			s=s+d;
			n=n/10;
		}
		
		
		
		printf("sum is =%d",s);
	}
	else
	{
		printf("invalid number\n");
	}	
	
}
