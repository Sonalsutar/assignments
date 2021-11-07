#include<stdio.h>
#include<conio.h>
struct exam
{
int roll ;
int marks;
char name[20];
};
struct exam obj[50];

void add(struct exam *obj);
void display(struct exam *obj);
void add(struct exam *obj)
{
printf("Name is:\n");
scanf("%s",&obj[20].name);
printf(" roll is: \n");
scanf("%d",&obj[20].roll);
printf("marks is: \n");
scanf("%d",&obj[20].marks);
printf("\n");
}
void display(struct exam *obj)
{
printf("name %s\n",obj[20].name);
printf("roll %d\n",obj[20].roll);
printf("marks %d\n",obj[20].marks);
}

int main()
{
int i;
do
{
printf("enter student details:");
printf("1.add student record \n2.display student record\n3.exit\n");
printf("choose between option 1,2,3\n");
scanf("%d",&i);
switch(i)
{
	case 1:
		add(obj);
		break;
	case 2:
		 display(obj);

		break;
	case 3:
		exit(0);
		break;
	default :
		printf("invalid case");
		break;
		 }
		}
 while(i!=3);
getch();
return 0;
}

