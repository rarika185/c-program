#include<stdio.h>
void main()
{
	int ang1,ang2,ang3,s;
	printf("enter the three angle of a triangle :");
	scanf("%d%d%d",&ang1,&ang2,&ang3);
	s=ang1+ang2+ang3;
	if(s==180)
	{
		printf("triangle is valid\n");
	}
	else
	{
		printf("triangle is not valid\n");
	}
}
