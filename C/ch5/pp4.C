#include <stdio.h>

int main (void)
{
    int wspeed;
    printf("What is the current wind speed in knots?: ");
    scanf("%d", &wspeed);

    printf("\n\n");
    if(wspeed < 1)
    {
        printf("The wind speed can be described as calm");
    }
    else if (wspeed <=3)
    {
        printf("The wind speed can be described as light air");
    }
    else if (wspeed <=27)
    {
        printf("The wind speed can be described as breeze");
    }
    else if (wspeed <=47)
    {
        printf("The wind speed can be described as gale");
    }
    else if (wspeed <=63)
    {
        printf("The wind speed can be described as storm");
    }
    else
    {
        printf("The wind speed can be described as hurricane");
    }

    printf("\n\n\n\n");
    return 0;
    
}