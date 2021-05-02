#include<stdio.h>
void main()
{
	int a;
	float x,y,z;
	printf("calculator\n");
	printf("************\n");
	printf("1-addition\n");
	printf("2-subtraction\n");
	printf("3-multiplication\n");
	printf("4-division\n");
	printf("enter your choice:\n");
	scanf("%d",&a);
	if(choice>0 && choice<5)
	{
		printf("enter the two numbers\n");
		scanf("%d%d",&x,&y);
	}		
	switch(a)
	{
		case 1:
			printf("%d+%d=",x,y);
			z=x+y;
			printf("%d\n",z);
			break;
		case 2:
			printf("%d-%d=",x,y);
			z=x-y;
			printf("%d\n",z);
			break;
		case 3:
			printf("%d*%d=",x,y);
			z=x*y;
			printf("%d\n",z);
			break;	
		case 4:
			printf("%d/%d=",x,y);
			z=x/y;
			printf("%d\n",z);
			break;
		default:
			printf("invalid choice");											
	}
	
	
	
	
}
