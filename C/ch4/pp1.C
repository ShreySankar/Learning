#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two digit number: ");
    scanf("%d", &num);
    printf("\nThe reversal is: %d%d\n\n\n", num%10, num/10);
}