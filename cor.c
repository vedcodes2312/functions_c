//call by reference
#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    printf("Memory location of x: %p\n", (void*)&x);
    printf("Memory location of y: %p\n", (void*)&y);

    // Function call
    swap(&x, &y);

    // Values of x and y after the function call
    printf("After swapping in main: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int temp;
    printf("Inside swap function: Memory location of a: %p\n", (void*)a);
    printf("Inside swap function: Memory location of b: %p\n", (void*)b);

    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}
