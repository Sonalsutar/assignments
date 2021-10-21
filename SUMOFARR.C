#include<stdio.h>
void main()
{
int i,a[10],n,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
	sum=sum+a[i];
	}
		printf("sum= %d \n",sum);
	getch();
}
