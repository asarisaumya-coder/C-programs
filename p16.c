#include <stdio.h>
int main() {
    float C, F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (5.0 / 9.0) * (F - 32);
    printf("Celsius = %.2f\n", C);
    return 0;
}