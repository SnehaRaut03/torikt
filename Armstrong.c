#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);  // For Armstrong numbers, we use the cube of digits
        num /= 10;
    }
    return (sum == originalNum);
}

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and print results
    printf("%d is %s Armstrong number.\n", number, isArmstrong(number) ? "an" : "not an");
    printf("%d is %s Perfect number.\n", number, isPerfect(number) ? "a" : "not a");

    return 0;
}
