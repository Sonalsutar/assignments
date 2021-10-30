#include<stdio.h>
#include<conio.h>
struct student
{
char name[50];
int roll_no[100];
}
student;
void main()
{
clrscr();
printf("enter the name:\n");
scanf("%s",&student.name);
printf("enter the roll_no:\m");
scanf("%d",&student.roll_no);
printf("name %s\n",student.name);
printf("roll no: %d\n",student.roll_no);
getch();
}