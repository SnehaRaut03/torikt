#include <stdio.h>

void findMidpoint(int x1, int y1, int x2, int y2) {
    // Calculate midpoint coordinates
    int xMidpoint = (x1 + x2) / 2;
    int yMidpoint = (y1 + y2) / 2;

    // Print the midpoint coordinates
    printf("Midpoint coordinates: (%d, %d)\n", xMidpoint, yMidpoint);
}

int main() {
   
    int x1, y1, x2, y2;

    // Input from the user
    printf("Enter coordinates of the line (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Call the function to find and print the midpoint
    findMidpoint(x1, y1, x2, y2);

    return 0;
}
