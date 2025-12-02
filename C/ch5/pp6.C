#include <stdio.h>

int main(void)
{
    int n1, n2, n3 , n4 ,n5 ,n6 ,n7 ,n8 ,n9 ,n10, n11, n12, fsum, ssum, total, check;
    printf("Enter the 12 digit UPC to compute validity: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10, &n11, &n12);
    fsum = n1+n3+n5+n7+n9+n11;
    ssum = n2+n4+n6+n8+n10;
    total = (3*fsum) + ssum;
    check = (9-((total-1)%10));
    

    if(check == n12)
    {
        printf("\n");
        printf("This UPC is VALID\n\n");
    }
    else
    {
        printf("\n");
        printf("This UPC is NOT VALID\n\n");
    }
}