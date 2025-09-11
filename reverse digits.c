#include<stdio.h>
void main()
{
      int n,i;
      printf("Enter a no");
      scanf("%d",&n);
      while(n>0)
      {
           printf("%d",n%10);
           n=n/10;
      }}

