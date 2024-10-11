#include<stdio.h>
int main()
{ int i,j,n,k;
  printf("Enter number= ");
  scanf("%d",&n);
  for(j=1;j<=n;j++)
{
  for(i=1;i<=j-1;i++)
{
 printf(" ");
}
  for(k=1;k<=n-j+1;k++)
{
 printf("*");
}
printf("\n");
}
return 0;
}

