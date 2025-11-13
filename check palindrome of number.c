#include<stdio.h>
int main(){
int n,original,rev=0,digit;//number ko original mai store kar liya

printf("Enter number:");
scanf("%d",&n);
original=n;
if(n<0){
printf("negative number cannot be palindrome");


return 0;
}
while(n>0){
digit=n%10;// last digit obtain
rev=rev*10+digit;//reverse ka last mai digit jod diya
n=n/10;

}
if(original==rev){
printf(" digit is  palindrome\n");
}
else {
printf(" digit is not palindrome\n");
}
return 0;
}
