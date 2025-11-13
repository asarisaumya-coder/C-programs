#include<stdio.h>
int main(){
int r;
printf("Enter no of rows:");
scanf("%d",&r);
int c;
printf("Enter no of columns:");
scanf("%d",&c);
int i;
int j;
int arr[r][c];
printf("Enter elements:");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d",&arr[i][j]);
}
}
printf("\n");
for( i=0;i<r;i++){
for( j=0;j<c;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}

int sum =0;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
sum = sum + arr[i][j];
}
}
printf("%d",sum);
return 0;
}
