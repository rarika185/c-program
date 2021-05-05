#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],m,n,i,j;
	printf("enter the order of the matrix");
	scanf("%d%d",&m,&n);
	if(m<=10 && n<=10)
	{
		printf("enter the matrix");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n\n");
		}
		printf("\n");
		printf("enter the second matrix");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n");
		printf("sum\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]+b[i][j]);
			}
			printf("\n\n");
		}
	}
}
	
