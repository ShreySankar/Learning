#include <stdio.h>

int main (void)
{
    int gs1, group, pcode, itnum, checkdig;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &pcode, &itnum, &checkdig);
    printf("\nGS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", group);
    printf("Publisher Code: %d\n", pcode);
    printf("Iten Number: %d\n", itnum);
    printf("Check Digit: %d\n", checkdig);
}