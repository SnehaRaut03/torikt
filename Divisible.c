// I love Saurav Ghimire so much
#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count and sum numbers divisible by 5 and not divisible by 2 and 3
    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 5== 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
            count++;
            sum += arr[i];
        }
    }

    // Display the count and sum
    printf("Count of numbers divisible by 5 and not divisible by 2 and 3: %d\n", count);
    printf("Sum of numbers divisible by 5 and not divisible by 2 and 3: %d\n", sum);

    return 0;
}
