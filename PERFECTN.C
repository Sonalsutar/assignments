int perfect(int number)
{
int a=1,sum=0;
printf("%d",&number);
while(a<number)
	{
	if(number %a ==0)
	sum=sum+a;
	a++;

	}
	return (sum);

  }
int main()
  {
	int number,s;
	printf("enter the number");
	scanf("%d",&number);
		s=perfect(number);
	if(s==number)
	{
		printf("number is perfect number",number);
	}
	else
	{
		printf("number is not a perfect number",number);
	}
getch();
return 0;
}
