#include<stdio.h>
int main(){
int i,n,a;
int count=0;
for(i=2;i<=500;i++){// prime number
a=1;
for(n=2;n<=i-1;n++){
if(i%n==0){
a=0;

}
}
if(a==1){
count++;
}
}
printf("there are %d",count);
return 0;

}

