#include<stdio.h>
void main()
{
	float x1,y1,x2,y2,x3,y3,m,n;
	printf("enter the point(x1,y1) :");
	scanf(" %f%f",&x1,&y1);
	printf("enter the point(x2,y2) :");
	scanf(" %f%f",&x2,&y2);
	printf("enter the point(x3,y3) :");
	scanf(" %f%f",&x3,&y3);
	m=(y2-y1)/(x2-x1);
	n=(y3-y2)/(x3-x2);
	if(m==n)
	{
		printf("All the three points lise on stright line");
	}
	else
	{
		printf("points do not lise on the stright line");
	}
	
}
