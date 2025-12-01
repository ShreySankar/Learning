#include <stdio.h>

int main(void)
{
    int p1,p2,p3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&p1,&p2,&p3);
    printf("\nYou entered %d.%d.%d\n\n", p1,p2,p3);
}