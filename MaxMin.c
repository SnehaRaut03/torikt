#include <stdio.h>

// Function to find the maximum between two numbers using a pointer
void findMax(int num1, int num2, int *max) {
    if (num1 > num2) {
        *max = num1;
    } else {
        *max = num2;
    }
}

int main() {
    int num1, num2, maximum;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to find the maximum using a pointer
    findMax(num1, num2, &maximum);

    // Display the result
    printf("The maximum between %d and %d is: %d\n", num1, num2, maximum);

    return 0;
}
