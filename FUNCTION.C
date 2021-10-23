#include<stdio.h>
int pd(int num)
{
int temp,rev=0,r;
temp=num;
	while(num!=0)
	{
	r=num %10 ;
	rev =rev*10+r;
	num/=10;
	}
	if(rev==temp)
	return 0;
	else
	return 1;
}
int main()
{
int num,palindrome;
	printf("enter the num");
	scanf("%d",&num);
	if(pd(num)==0)
	{
		printf("its a palindrome number: %d",num);
	}
	else
	{
		printf("its not a palindromenumber: %d",num);
	}
getch();
return 0;
}