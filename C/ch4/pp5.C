#include <stdio.h>

int main(void)
{
    int n1, n2, n3 , n4 ,n5 ,n6 ,n7 ,n8 ,n9 ,n10, n11, fsum, ssum, total;
    printf("Enter the 11 digit UPC to compute check number for: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10, &n11);
    fsum = n1+n3+n5+n7+n9+n11;
    ssum = n2+n4+n6+n8+n10;
    total = (3*fsum) + ssum;
    printf("Check Digit: %d\n\n\n\n", (9-((total-1)%10)));
}
