// program to calculate electric bill 
#include <stdio.h>

int main() {
    // Declaration of variables
    int customerId, unitConsumed;
    char customerName[50];
    float chargesPerUnit, totalAmount, surcharge = 0;

    // Prompting the user to enter CustomerID, CustomerName, and UnitConsumed
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Unit Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculating charges per unit based on the given conditions
    if (unitConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitConsumed > 300 && unitConsumed < 600) {
        chargesPerUnit = 200;
    } else if (unitConsumed >= 600 && unitConsumed < 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }

    // Calculating total bill before surcharge
    totalAmount = unitConsumed * chargesPerUnit;

    // Applying surcharge if bill exceeds Kshs. 500
    if (totalAmount > 500) {
        surcharge = 0.2 * totalAmount;
    }

    // Total amount to pay after surcharge
    totalAmount += surcharge;

    // Ensuring the minimum bill is Kshs. 200
    if (totalAmount < 200) {
        totalAmount = 200;
    }

    // Displaying output
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalAmount);

    return 0;
}