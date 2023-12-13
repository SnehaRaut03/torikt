#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main() {
    int num1, num2;

    // Input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Displaying the numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Calling the swap function
    swap(&num1, &num2);

    // Displaying the numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
