/* Expected Output :
    ****
     ***
      **
       *
      **
     ***
    ****
*/

#include<stdio.h>
int main()
{
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
        printf("*");
        }
    printf("\n");
    }
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i+1;k++)
        {
        printf("*");
        }
    printf("\n");
    }
}