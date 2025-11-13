#include<stdio.h>
int main(){
char str[100];
printf("Enter a string:");
gets(str);

for(int i=0;str[i]!=0;i++){
if(str[i]>='a' && str[i]<='z'){
str[i] = str[i] - 32;// lower ko upper mai conversion and 32 ka diff h lower aur upper mai
}
else if(str[i]>= 'A' && str[i]<= 'Z'){
str[i] = str[i]+ 32;
}





}
printf("Toggle case sting is %s",str);






}
