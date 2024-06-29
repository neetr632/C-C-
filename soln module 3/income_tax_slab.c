#include <stdio.h>

int main() {
    int TAX = 0; // Initialize TAX to 0
    int income;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income >= 250000 && income <= 500000) {
        TAX = 0.05 * (income - 250000);
        printf("The taxpayer falls in the lower class bracket, and the tax rate with a value of %d\n", TAX);
    }
    else if (income > 500000 && income <= 1000000) {
        TAX = 0.20 * (income - 500000);
        printf("The taxpayer falls in the middle class bracket, and the tax rate with a value of %d\n", TAX);
    }
    else if (income > 1000000) {
        TAX = 0.30 * (income - 1000000);
        printf("The taxpayer falls in the higher class bracket, and the tax rate with a value of %d\n", TAX);
    }
    else {
        printf("The taxpayer's income is below 250,000 and is not taxed.\n");
    }

    return 0;
}
