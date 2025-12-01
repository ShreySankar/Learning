//I'm improving this code to take an input
#include <stdio.h>
#define PI 3.14159265358979323846
int main(void)
{

    float r;
    printf("Type a value for the radius of the sphere:\n");
    scanf("%f", &r);
    printf("\nHere is the computed value of the sphere: \n%0.2f\n\n", (4.0f/3.0f)*PI*r*r*r);

}