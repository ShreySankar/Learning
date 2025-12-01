#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a value for x:\n");
    scanf("%f",&x);
    printf("Here is the resulting value of the polynomial: %f\n\n",(((((3.0*x + 2.0)*x - 5.0)*x - 1)*x + 7.0)*x - 6.0));
}