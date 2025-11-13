#include<stdio.h>
int power(int a,int b){
    int result = 1;
for(int i=1;i<=b;i++){
result = result*a;
}
 return result;
}
int main(){
int a;
printf("Enter a(base): ",a);
scanf("%d",&a);
int b;
printf("Enter b(exponent): ",b);
scanf("%d",&b);
printf("%d is raise to %d is %d\n",a,b,power(a,b));
return 0;
}
