#include<stdio.h>
int main()
{int i,n;
printf("Enter a number= ");
scanf("%d",&n);
for(int i=2;i<=n-1;i++)
{
  if(n%i==0)
  { 
    printf("Not Prime");
    break;
  }
}
if(i==n)
{
{printf("Prime");}
}

return 0;}
