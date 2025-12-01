#include <stdio.h>

int main(void)
{
    int doll;
    printf("Enter a dollar amount: ");
    scanf("%d", &doll);

    printf("\n\n$20 bills: %d", doll/20);
    printf("\n$10 bills: %d", doll%20/10);
    printf("\n $5 bills: %d", ((doll%20)%10)/5);
    printf("\n $1 bills: %d\n\n", (((doll%20)%10)%5)/1);
}