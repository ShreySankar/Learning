#include <stdio.h>

int main(void)
{
    int num1, num2, den1, den2,finnum,finden;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&num1, &den1, &num2, &den2);
    finnum = (num1 * den2) + (num2*den1);
    finden = den1 * den2;
    printf("\n\nThe sum is: %d/%d",finnum, finden);
}