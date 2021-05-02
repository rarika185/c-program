#include<stdio.h>
void main()
{
	int x,y;
	printf("enter the points");
	scanf("%d%d",&x,&y);
	if(x>0 && y==0)
	{
		printf("point lies in x axis");
	}
	else if(y>0 && x==0)
	{
		printf("point lise in y axis");
	}
	else
	{
		printf("point lise in origin");
	}
		

}
