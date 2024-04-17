// Expected output:
// *
//   *
//     *
//   *
// *
//   *
//     *
//   *
// *
//   *
//     *
//   *
// *

#include<stdio.h>
int main()
{
    for(int k=0;k<3;k++){
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
        printf("  ");
        }
        printf("*");
    printf("\n");
    }
    for(int i=0;i<4;i++)
    {
        for(int j=4;j>i;j--)
        {
        printf("  ");
        }
        printf("*");
    printf("\n");
    }
    }
    return 0;
}