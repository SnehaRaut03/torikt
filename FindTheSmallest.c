#include <stdio.h>

// Function to find the smallest integer
int findSmallest(int arr[], int size) {
    int smallest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

// Function to find the largest integer
int findLargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[3];

    // Input three integers
    printf("Enter three integers:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the smallest and largest using functions
    int smallest = findSmallest(arr, 3);
    int largest = findLargest(arr, 3);

    // Display the results
    printf("Smallest integer: %d\n", smallest);
    printf("Largest integer: %d\n", largest);

    return 0;
}
