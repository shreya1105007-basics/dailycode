#include <stdio.h>

int main() {
    float num1, num2; // Declare variables to store the input numbers
    float sum, difference, product, quotient; // Declare variables to store the results

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;
    // Calculate the difference
    difference = num1 - num2;
    // Calculate the product
    product = num1 * num2;

    // Check for division by zero before calculating the quotient
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Cannot calculate quotient: Division by zero is not allowed.\n");
    }

    return 0; // Indicate successful program execution
}

