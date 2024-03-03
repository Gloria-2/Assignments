#include <stdio.h>

int main() {
    char book_id[20];
    int due_day, due_month, due_year;
    int return_day, return_month, return_year;
    int total_days_overdue, overdue_charge;

    // Get book ID
    printf("Enter book ID: ");
    scanf("%s", book_id);

    // Get due date
    printf("Enter due date (DD MM YYYY): ");
    scanf("%d %d %d", &due_day, &due_month, &due_year);

    // Get return date
    printf("Enter return date (DD MM YYYY): ");
    scanf("%d %d %d", &return_day, &return_month, &return_year);

    // Calculate total days overdue (assuming non-leap years and 30 days per month)
    total_days_overdue = 0;
    if (return_year > due_year) {
        total_days_overdue += (return_year - due_year) * 365;  // Account for full years
    } else if (return_year == due_year) {
        if (return_month > due_month) {
            for (int i = due_month + 1; i <= return_month; i++) {
                total_days_overdue += 30;  // Add 30 days for each intervening month
            }
            total_days_overdue += return_day - due_day;  // Add days within the same month
        } else if (return_month == due_month) {
            total_days_overdue = return_day - due_day;
        }
    }

    // Calculate overdue charge based on total days overdue
    if (total_days_overdue <= 0) {
        overdue_charge = 0;  // No charge if not overdue
    } else if (total_days_overdue <= 7) {
        overdue_charge = 20;
    } else if (total_days_overdue <= 14) {
        overdue_charge = 50;
    } else {
        overdue_charge = 100;
    }

    // Display book info and calculated charge
    printf("\nBook ID: %s\n", book_id);
    printf("Due Date: %d/%d/%d\n", due_day, due_month, due_year);
    printf("Return Date: %d/%d/%d\n", return_day, return_month, return_year);
    printf("Overdue Charge: %d shillings\n", overdue_charge);

    return 0;
}
