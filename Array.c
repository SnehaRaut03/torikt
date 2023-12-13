#include <stdio.h>
// Making changes to learn git and github

// Function to search for an element in the array
void searchElement(int arr[], int size, int element) {
    int found = 0;  // Flag to track if the element is found

    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            // Element found, print its index and set the flag
            printf("Element %d found at index %d.\n", element, i);
            found = 1;
            break;  // Stop searching once the element is found
        }
    }

    // If the element is not found, display a message
    if (!found) {
        printf("Element %d not found.\n", element);
    }
}

int main() {
    int arr[] = {10, 5, 7, 91, 54, 24};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Pass the array to the searchElement function
    searchElement(arr, size, 54);  // Change the number to test different elements

    return 0;
}
