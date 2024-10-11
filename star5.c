#include<stdio.h>
int main()
{ int i,j,n,k;
  printf("Enter number= ");
  scanf("%d",&n);
  for(j=1;j<=n;j++)
{
  for(i=1;i<=n-j;i++)
{
 printf(" ");
}
  for(k=1;k<=j;k++)
{
 printf("* \t");
}
printf("\n");
}
return 0;
}
