QUIZ 1.
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


QUIZ 2.
#include <stdio.h>

int main() {
    // Declare variables
    float weight, height, bmi;

    // Prompt user for input
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("\nYour Body Mass Index (BMI): %.2f\n", bmi);

    return 0;
}
QUIZ 3.
#include <stdio.h>

int main() {
    // Declare variables
    double salary, bonus;
    int yearsOfService;

    // Prompt user for input
    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &yearsOfService);

    // Check if the employee is eligible for a bonus
    if (yearsOfService > 5) {
        // Calculate bonus (5% of salary)
        bonus = 0.05 * salary;

        // Display the bonus amount
        printf("\nCongratulations! You are eligible for a bonus.\n");
        printf("Your bonus amount: %.2lf\n", bonus);
    } else {
        // Employee is not eligible for a bonus
        printf("\nSorry, you are not eligible for a bonus.\n");
    }

    return 0;
}