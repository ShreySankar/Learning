#include <stdio.h>

int main(void)
{
    int n1, num;
    printf("Enter numerical grade: ");
    scanf("%d", &num);
    n1 = num/10;

    switch (n1)
    {
        case 1: case 2: case 3: case 4: case 5: printf("Letter Grade: F"); break;
        case 6: printf("Letter Grade: D"); break;
        case 7: printf("Letter Grade: C"); break;
        case 8: printf("Letter Grade: B"); break;
        case 9: case 10: printf("Letter Grade: A"); break;
    }
    printf("\n\n\n");
}