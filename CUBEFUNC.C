#include<stdio.h>
int findcube(int num)
{
return num*num*num;
}
int main()
{
int num,cube;
printf("enter the number:");
scanf("%d",&num);
cube=findcube(num);
printf("Cube of number %d",cube);
getch();
return 0;
}