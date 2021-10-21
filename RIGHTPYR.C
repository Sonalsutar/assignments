#include<stdio.h>
void main()
{
int i,j,k;
printf("number of rows:");
scanf("%d",k);
for(i=1;i<=k;i++)
{
printf(" ");
for(j=k;j<=1;j++)
{
printf("* ");
}
printf("\n");
}

}

