#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,r,h,k,d;
	printf("enter the center points(x,y) :");
	scanf("%f%f",&x,&y);
	printf("enter the radius :");
	scanf("%f",&r);
	printf("enter the points to check its position");
	scanf("%f%f",&h,&k);
	d=sqrt(pow(h-x,2)+pow(k-y,2));
	if(d>r)
	{
		printf("the point is out side the circle:\n");
	}
	else if(d<r)
	{
		printf("the point is inside the circle :\n");
	}
	else
	{
		printf("the point is on the circle");
	}
		
		
}
