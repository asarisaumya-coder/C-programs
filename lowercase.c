#include<stdio.h>
#include<string.h>
int main(){
char str[100];
puts("Enter a string: ");
gets(str);



strlwr(str);   // convert whole number string to lower case
printf("Lowercase string:%s\n",str);
return 0;


}
