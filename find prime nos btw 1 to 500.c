#include<stdio.h>
int main(){
    int n,i,a;

for(n=2;n<=500;n++){
a=0;// assume prime
for(i=2;i<=n-1;i++){
if(n%i==0){


a=1;
break;
}
}

if(a==0){
    printf("%d ",n);
}
}
return 0;
}
