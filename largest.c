#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Determine the largest number using if-else
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %g\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %g\n", num2);
    } else {
        printf("Largest is %g\n", num3);
    }

    return 0;
}