#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    printf("\nThe reversal is: %d%d%d\n\n\n", num%10,(num%100)/10, num/100);
}