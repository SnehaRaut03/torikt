#include <stdio.h>
#include <math.h>

// Function to calculate the missing variable in the velocity formula
double velocityCalc(double V, double u, double a, double t) {
    // Check for NAN values to determine the variable to calculate
    if (isnan(V)) {
        // V is NAN, calculate V
        return u + a * t;
    } else if (isnan(u)) {
        // u is NAN, calculate u
        return V - a * t;
    } else if (isnan(a)) {
        // a is NAN, calculate a
        return (V - u) / t;
    } else if (isnan(t)) {
        // t is NAN, calculate t
        return (V - u) / a;
    } else {
        // Invalid input, return NaN
        return NAN;
    }
}

int main() {
    // Example usage
    double V, u, a, t;

    // Set known values and one unknown to NAN
    V = 0.0;
    u = 10.0;
    a = NAN;
    t = 2.0;

    // Call the function to calculate the missing variable
    double result = velocityCalc(V, u, a, t);

    // Display the result
    printf("The missing variable is: %.2f\n", result);

    return 0;
}
