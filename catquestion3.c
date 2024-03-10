//QUIZ 3.
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