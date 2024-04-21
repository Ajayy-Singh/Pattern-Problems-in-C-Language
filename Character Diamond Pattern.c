// Print a diamond pattern where each row contains characters in alphabetical order.

//      A
//     B C
//    D E F
//   G H I J
//  K L M N O
//   P Q R S
//    T U V
//     W X
//      Y

#include<stdio.h>
int main()
{
    int x=65;
    for ( int  i = 1; i <= 5;i++)             // for printing new line
    {
        for(int j=5;j>i;j--){                // for printing the starting spaces
            printf(" ");
        }
        for( int j=1;j<=i;j++){             // For print the Respective Alphabete ASCII of X 
        printf("%c ",x);
        x++;                                // Here the value of X will increse 65 to  80 but print till 79
        }
    printf("\n");  
    }
    for( int i=4;i>=1;i--)                  // for printing new line
    {
        for(int j=1;j<=5-i;j++)             //for print the spaces 
        {
            printf(" ");
        }
        for( int j=1;j<=i;j++){  
        printf("%c ",x);
        x++;                                // Here X = 80 at starting and increase till 90
        }
    printf("\n");  
    }
    return 0;
}
