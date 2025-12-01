#include <stdio.h>

int main(void)
{
    float loan, rate, mon_pay, current;
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("\nEnter interest rate: ");
    scanf("%f",&rate);
    printf("\nEnter motnhly payment: ");
    scanf("%f", &mon_pay);

 rate = (rate/100.0)/12.0;

    current = loan + (loan * rate);
    current = current - mon_pay;
    printf("\nBalance remaining after first payment: %0.2f\n", current);

    current = current + (current * rate);
    current = current - mon_pay;
    printf("Balance remaining after second payment: %0.2f\n", current);

    current = current + (current * rate);
    current = current - mon_pay;
    printf("Balance remaining after third payment: %0.2f\n\n", current);
}