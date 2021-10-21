#include<stdio.h>
void main()
int a[5]={22,35,64,7,33},i,big,pos;
big=0;
pos=0;
for(i=1;i<=5;i++)
{
	if(big<a[i])
	{
		big=a[i];
		pos=i+1;
	}
	printf("biggest number from array",big,pos);
}