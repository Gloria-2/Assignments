#include <stdio.h>

// Function to calculate volume of a sphere
double calculateSphereVolume(double radius) {
    const double PI = 3.14159265358979323846;
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

int main() {
    double radius;
    
    // Prompting user to enter the radius
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Checking if the radius is valid
    if (radius <= 0) {
        printf("Invalid radius. Please enter a positive value.\n");
        return 1; // Returning 1 to indicate an error
    }

    // Calculating and printing the volume of the sphere
    double volume = calculateSphereVolume(radius);
    printf("Volume of the sphere with radius %.2f is: %.2f\n", radius, volume);

    return 0;
}
