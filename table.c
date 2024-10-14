#include <stdio.h>

// Function declaration
void printTable(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    printTable(num);

    return 0;
}

// Function definition
void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
