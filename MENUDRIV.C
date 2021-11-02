#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
void main()
{
int num1,num2,i,x;
printf("Enter 2 numbers:");
scanf("%d%d",&num1,&num2);
printf("1.Addtion\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
printf("enter the number which operation you want to perform:");
scanf("%d",&i);
switch(i)
{
	case 1:
		x=add(num1,num2);
		printf("ans=%d\n",x);

		break;
	case 2:
		x=sub(num1,num2);
		printf("ans=%d\n",x);
		break;
	case 3:
		x=mul(num1,num2);
		printf("ans=%d\n",x);
		break;
	case 4:
		if (num2==0)
		{
		printf("not divisilbe by 0");
		}
		else
		{
		x=divi(num1,num2);
		printf("ans=%d\n",x);
		}
		break;
	case 5:
		exit(0);
		break;
	default :
		printf("invalid option");
		break;

	}
}
int add(int num1,int num2)
{
int x;
x=(num1+num2);
return x;
}
int sub(int num1,int num2)
{
int x;
x=(num1-num2);
printf("ans=%d\n",x);
return x;
}
int mul(int num1,int num2)
{
int x;
x=(num1*num2);
printf("ans=%d\n",x);
return x;
}
int divi(int num1,int num2)
{
int x;
x=(num1/num2);
printf("ans=%d\n",x);

return x;
}
