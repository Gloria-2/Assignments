//QUIZ 1.
#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    // Declare variables
    double radius, height, volume, surfaceArea;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * pow(radius, 2) * height;
    surfaceArea = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;

    // Display the results
    printf("\nVolume of the cylinder: %.2lf\n", volume);
    printf("Surface Area of the cylinder: %.2lf\n", surfaceArea);

    return 0;
}
