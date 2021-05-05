#include<stdio.h>
void main()
{
	int n,a[50],i,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	if(n<=50)
	{
		printf("enter the %d numbers",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("sum=%d",sum);
	}
	else
	{
		printf("enter the number less than or equal to 50");
	}
		
}
