#include <stdio.h>

// Function to calculate electric bill
double calculateElectricBill(int units) {
    double bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    double total;

    // Prompt user for number of units consumed
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Call the function to calculate the bill
    total = calculateElectricBill(units);

    // Display the result
    printf("Total electric bill: KSh. %.2f\n", total);

    return 0;
}
