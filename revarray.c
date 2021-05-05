#include<stdio.h>
void main()
{
	int n,a[50],i;
	printf("enter the numbers(should less than 50)");
	scanf("%d",&n);
	if(n<=50)
	{
		printf("enter the %d number",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=n-1;i>=0;i--)
		{
			printf("%d ",a[i]);
		}
	}
	else
	{
		printf("enter the number should less or equal to 50");
	}
		
}
