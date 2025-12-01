#include <stdio.h>

int main(void)
{
    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    
    if(hour >= 24 || hour <0)
    {
        printf("Invalid input, restart program\n\n\n\n");
    }
    else
    {
        int display_hour = hour % 12;
        if (display_hour == 0) 
        {
            display_hour = 12;
        }
    
         const char *period = (hour < 12) ? "AM" : "PM";
    
        printf("Equivalent 12-hour time: %d:%02d %s\n", display_hour, min, period);
    
        return 0;
    }
}