#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);	
}	
