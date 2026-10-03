#include <stdio.h>

int main() {
    double income, tax;

    printf("enter your income:");
    scanf("%lf" , &income);
    // Check for invalid income
    if (income < 0) {
        printf("invalid income");
        return 0;
    }
    //the total tax is calculated based on the income slabs
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if ( income <= 1000000) {
        tax = (income - 500000) * 0.2 + 12500;
    } else if (income > 1000000) {
        tax = (income - 1000000) * 0.3 + 112500;
    }
    printf("your tax is: %lf", tax);
    return 0;
}