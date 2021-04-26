#include<stdio.h>
#include<math.h>
void main()
{
	float l1,l2,g1,g2,d;
	float l1rad,l2rad,g1rad,g2rad;
	printf("enter the latitude and longitude of first place");
	scanf("%f%f",&l1,&g1);
	printf("enter the latitude and longitude of second place");
	scanf("%f%f",&l2,&g1);
	l1rad=l1*(3.14/180);
	l2rad=l2*(3.14/180);
	g1rad=g1*(3.14/180);
	g2rad=g2*(3.14/180);
	d=3963*acos((sin(l1rad)*sin(l2rad)) + ((cos(l1rad)*cos(l2rad)*cos(g2rad-g1rad))));
	printf("distance %f",d);
	printf("\n\n");
	
	
	
}
