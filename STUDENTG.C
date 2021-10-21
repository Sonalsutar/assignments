#include<stdio.h>
void main()
{
int marks;
printf("enter the marks of student between 0-100:");
scanf("%d",&marks);
switch(marks/10)
{
	case 10:
	case 9:
		{
		printf("A GRADE");
		}
		break;
	case 8:
	case 7:
		{
		printf("B GRADE");
		}
		break;
	case 6:
	case 5:
		{
		printf("B GRADE");
		}
		break;
	case 4:
	case 3:
		{
		printf("A GRADE");
		}
		break;
	case 2:
	case 1:
		{
		printf("default case");
		}
     }
getch();
}
