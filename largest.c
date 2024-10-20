// Program to find the largest among two using functions

#include <stdio.h>

// Function declaration
int findLargest(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    int largest = findLargest(num1, num2);

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}

// Function definition
int findLargest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
           