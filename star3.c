#include<stdio.h>
int main()
{ int i,j,n;
  printf("Enter number= ");
  scanf("%d",&n);
  for(j=1;j<=n;j++)
{
  for(i=j;i<=n;i++)
{
 printf("*");
}
printf("\n");
}
return 0;
}

