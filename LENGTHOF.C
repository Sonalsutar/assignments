#include<stdio.h>
void main()
{
int str[100];
int i;
printf("enter the string:");
scanf("%s",&str);
for(i=0;str[i]!='\0';++i)
{
printf(" %d",i);
 }

getch();
}


