#include <stdio.h>

int findLargestElement(int array[], int size) {
    // Assume the first element is the largest
    int largest = array[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    return largest;
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int array[size];

    // Get elements of the array from the user
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Find the largest element in the array
    int largest = findLargestElement(array, size);

    // Display the result
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
