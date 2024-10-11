#include<stdio.h>
int main()
{int i,n,u=1;
printf("Enter number= ");
scanf("%d",&n);
for(i=1;i<=n*(n-1);i++)
{
printf("Factorial is %d",n *i);}
return 0;
}
