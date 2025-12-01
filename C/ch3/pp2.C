#include <stdio.h>

int main(void)
{
    int itnum, mm, dd, yyyy;
    float price;
    printf("Enter an item number: ");
    scanf("%d", &itnum);
    printf("\nEnter unit price: ");
    scanf("%f", &price);
    printf("\nEnter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("\n\nItem\t\tUnit\t\tPurchase");
    printf("\n\t\tPrice\t\tDate");
    printf("\n%-d\t\t$%7.2f\t%02d/%02d/%04d",itnum,price,mm,dd,yyyy);

}