#include<stdio.h>
void main()
{
int marks;
printf("enter the marks of student:");
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
		printf("C GRADE");
		}
		break;
	case 4:
		{
		printf("D GRADE");
		}
		break;
	case 3:
		{
		printf("E GRADE");
		}
		break;
	case 2:
		{
		printf("need to repeat");
		}
		break;
	case 1:
		{
		printf("fail");
		}
	       break;
	default:
		{
		printf("invalid number");
		}
		break;
}
getch();
}