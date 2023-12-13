#include <stdio.h>

// Function to solve simultaneous equations
void equations(double a, double b, double c, double d, double e, double f) {
    double determinant = a * e - b * d;

    if (determinant == 0) {
        // The lines are parallel, no solution
        printf("The lines are parallel, no solution.\n");
    } else {
        // Calculate the intersection point (x, y)
        double x = (c * e - b * f) / determinant;
        double y = (a * f - c * d) / determinant;

        // Display the solution
        printf("The solution is: x = %.2f, y = %.2f\n", x, y);
    }
}

int main() {
    // Example usage
    double a, b, c, d, e, f;

    // Input from the user or set values
    printf("Enter coefficients for equation 1 (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Enter coefficients for equation 2 (d e f): ");
    scanf("%lf %lf %lf", &d, &e, &f);

    // Call the function to solve simultaneous equations
    equations(a, b, c, d, e, f);

    return 0;
}
