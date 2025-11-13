#include<stdio.h>
int main(){
int i,n,a;
int sum=0;
for(n=2;n<=500;n++){// assume prime
a=1;
for(i=2;i<=n-1;i++){
if(n%i==0){// prime nhi h
a=0;
break;
}
}
if(a==1){
sum=sum+n;



}


}
printf("sum of prime numbers between between 1 to 500 are :%d",sum);

return 0;
}
