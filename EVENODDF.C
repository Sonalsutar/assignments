#include<stdio.h>
int even(int num)
{
return (num & 1);
}
int main()
{
int num;
printf("enter the num");
scanf("%d",num);
if (even(num))
{
printf("num is even",num);
}
else
{
printf("num is odd",num);
}
getch();
return 0;
}