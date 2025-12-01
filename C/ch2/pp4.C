#include <stdio.h>

int main(void)
{
    float money;
    printf("Type in a dollars and cents amount!:\n");
    scanf("%f", &money);
    printf("\nHere's the final amount with 5 percent tax!: %0.2f\n\n", (money + (money*0.05)));

}

