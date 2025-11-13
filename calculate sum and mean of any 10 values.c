#include<stdio.h>
int main(){
int i,num;
int sum=0;
float mean;
for(i=1;i<=10;i++){
printf("enter number %d:",i);
scanf("%d",&num);
sum=sum+num;
}
mean=(sum/10.0);
printf("sum of these 10 values is %d\n",sum);
printf("mean of these 10 values is %f\n",mean);
return 0;
}
