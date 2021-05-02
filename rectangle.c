#include<stdio.h>
void main()
{
	int x,y,a,p;
	printf("enter the length and breadth:");
	scanf("%d%d",&x,&y);
	a=x*y;
	p=2*(x+y);
	if(a>p)
	{
		printf("area greater than perimeter\n");
	}
	else
	{
		printf("perimeter greater than area\n");
	}
	
}

