#include <stdio.h>

int main(void)
{
    int mm, dd, yyyy;
    printf("Write a date in the format mm/dd/yyyy:\n");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("\n\nYou entered the date %.4d%.2d%.2d", yyyy,mm,dd);
}