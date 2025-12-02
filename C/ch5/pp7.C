#include <stdio.h>

int main(void)
{
    int a, b, c, d, largest, smallest, temp1, temp2;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a > b) { temp1 = a; temp2 = b; }
    else { temp1 = b; temp2 = a; }
    
    if (c > d) { largest = c; smallest = d; }
    else { largest = d; smallest = c; }
    
    if (temp1 > largest) largest = temp1;
    
    if (temp2 < smallest) smallest = temp2;
    
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    
    printf("\n\n");
    return 0;
}