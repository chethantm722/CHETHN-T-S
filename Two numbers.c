#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    
    // Check for division by zero
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("\n--- Results ---\n");
        printf("Sum       : %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product   : %.2f\n", product);
        printf("Quotient  : %.2f\n", quotient);
    } else {
        printf("\n--- Results ---\n");
        printf("Sum       : %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product   : %.2f\n", product);
        printf("Quotient  : Division by zero is not allowed.\n");
    }

    return 0;
}
