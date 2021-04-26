#include<stdio.h>
void main()
{
	int n,x;
	printf("enter the number");
	scanf("%d",&n);
	if(n>=100)
	{
		x=n/100;
		n=n%100;
		printf("%d*100\n",x);
	}
	if(n>=50)
	{
		x=n/50;
		n=n%50;
		printf("%d*50\n",x);
	}
	if(n>=10)
	{
	
		x=n/10;
		n=n%10;
		printf("%d*10\n",x);
	}
	if(n>=5)
	{
		x=n/5;
		n=n%5;
		printf("%d*5\n",x);
	}	
	if(n>=2)
	{
		x=n/2;
		n=n%2;
		printf("%d*2\n",x);
	}		
	if(n>=1)
	{
		x=n/1;
		n=n%1;
		printf("%d*1\n",x);
	}		
	
	
}
