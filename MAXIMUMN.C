#include<stdio.h>
int max(int n1,int n2)
{
if(n1>n2)
{
	return n1;
}
else
{
	return n2;
}
}
int main()
{
int n1,n2,res;
printf("enter num1:");
scanf("%d",&n1);
printf("enter num2:");
scanf("%d",&n2);
res= max(n1,n2);
printf("maximum num between num1 and num2 is %d",resf);
getch();
return 0;
}