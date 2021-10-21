#include<stdio.h>
void main()
{
int i,j,x;
printf("enter value:");
scanf("%d",&x);
for(i=x;i>=0;i--)
{
for(j=1;j<=i;j++)
{
printf("%d" " ",j);
}
printf("\n");
};
}