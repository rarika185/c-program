#include<stdio.h>
void main()
{
	int a,b;
	
	printf("enter the number");
	scanf("%d",&a);
	if(a<0)
	{
		b=-1*a;
		printf("absolute value of %d is %d\n",a,b);
	}
	else
	{
		printf(" absolute value is %d\n",a);
	}
}

