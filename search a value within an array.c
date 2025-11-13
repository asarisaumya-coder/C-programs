#include<stdio.h>
int main(){
int n,i,x,flag=0;
printf("Enter size of array:");
scanf("%d",&n);
int arr[n];
printf("Enter elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("Enter value to search: ");
scanf("%d",&x);

for(i=0;i<n;i++){
if(arr[i]==x){
printf("%d is found at %d",x,i);

flag=1;
break;
}
}
if(flag==0){
printf("value not found");
}




return 0;
}
