#include<stdio.h>
int main(){
int n,digit;
printf("Enter number:");
scanf("%d",&n);
printf("Digits are");
while(n>0){
digit=n%10;// obtain last digit
n=n/10;// remove lAST DIGIT
printf("%d ",digit);
}
return 0;
}
