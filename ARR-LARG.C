#include<stdio.h>
void main()
{
int i,n;
float a[100];
	printf("enter the array number:");
	scanf("%d",&n);
	printf("\n");
	for (i=0;i<n;i++)
	{
	printf("enter the number:",i+1);
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if (a[0]<a[i])
		a[0]=a[i];
	{
		printf("biggest number:",a[0]);
	}
getch();
}


