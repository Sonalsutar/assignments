#include<stdio.h>
void max(int a,int b)
{
int value;
printf("enter the num1:");
scanf("%d",&a);
printf("enter the num2:");
scanf("%d",&b);
value= max( a,int b);
printf("the maximum number %d",value);
}
int max(int a,int b)
{
if(a<b)
return a;
else
return b;
}
