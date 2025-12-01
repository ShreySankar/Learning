/*
#include <stdio.h>

int main(void)
{
    int num, n1, n2, n3, n4, n5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    n5 = num/(8*8*8*8);
    n4 = (num-(n5*8*8*8*8))/(8*8*8);
    n3 = (num-(n5*8*8*8*8)-(n4*8*8*8))/(8*8);
    n2 = (num-(n5*8*8*8*8)-(n4*8*8*8)-(n3*8*8))/(8);
    n1 = (num-(n5*8*8*8*8)-(n4*8*8*8)-(n3*8*8) - (n2*8))%(8);
    printf("\nIn octal your number is: %d%d%d%d%d\n\n\n", n5,n4,n3,n2,n1);
}
*/

//More efficient way 
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    
    int d1 = num % 8;
    int d2 = (num / 8) % 8;
    int d3 = (num / 64) % 8;
    int d4 = (num / 512) % 8;
    int d5 = (num / 4096) % 8;
    
    printf("\nIn octal your number is: %d%d%d%d%d\n", d5, d4, d3, d2, d1);
    
    return 0;
}