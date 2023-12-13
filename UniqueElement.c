#include <stdio.h>

void printUniqueElements(int array[], int size) {
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        int isUnique = 1; // Assume the current element is unique

        // Check if the current element is unique
        for (int j = 0; j < size; j++) {
            if (i != j && array[i] == array[j]) {
                isUnique = 0; // Not unique, break the inner loop
                break;
            }
        }

        // If the current element is unique, print it
        if (isUnique) {
            printf("%d", array[i]);

            // Print a comma after the element, unless it's the last one
            if (i < size - 1) {
                printf(",");
            }
        }
    }
    printf("\n");
}

int main() {
    // Example array
    int arr[] = {1, 2, 4, 8, 4, 2, 4, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print unique elements
    printf("Unique elements in the array: ");
    printUniqueElements(arr, size);

    return 0;
}
