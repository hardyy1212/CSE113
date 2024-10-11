#include<stdio.h>
int main()
{ int n,d;
  printf("Enter number= ");
  scanf("%d",&n);
while(n!=0)
{
  d=n%10;
  n=n/10;
  printf("%d",d);

}
//printf("Reverseof digits= %d",n);
return 0;}
