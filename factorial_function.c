#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Call the factorial function
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}

// Function to calculate factorial non-recursively
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
