#include <stdio.h>
int main() {
    int arr[5];
    int i;
    print("Enter the Integers:\n");
    for(i=0;i<5; i++){
        printf("Enter value %d:",i+1);
        scanf("%d",&arr[i]);
        }
        printf("\nYou entered:\n");
        for(i=0;i<5;i++){
            printf("%d",arr[i]);
            }

            return 0;
}

