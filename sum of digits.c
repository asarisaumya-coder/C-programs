#include<stdio.h>
int main (){
int n,sum=0;
printf("Enter Number:");
scanf("%d",&n);

if(n<0)
n=-n;// negative number ko positive banaya
if(n==0)
sum=0;
while(n!=0){
sum=sum + (n%10);// last digits ko add karte jana h
n=n/10;//remove last digit
}
printf("\n%d",sum);
return 0;
}
