#include<stdio.h>
void main()
{
	int a,d,i,rev=0;
	printf("enter the number");
	scanf("%d",&a);
	if(a>=10000 && a<=99999)
	{
		while(a>0)
		{
			d=a%10;
			rev=rev*10+d;
			a=a/10;
			i++;
		}
		printf("%d",rev);
	}
	else
	{
		printf("invalid");
	}
}
