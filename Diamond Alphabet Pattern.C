// Print a diamond pattern where each row contains alphabets.


//      A
//     B C
//    D   E
//   F     G
//  H       I
//   J     K
//    L   M
//     N O
//      P

#include<stdio.h>
int main()
{
    char alpha='A';
    
    // Upper alphabetic trangle
    
    for (int i = 1; i <=5; i++) {
        
        for (int j = i; j < 5; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("%c",alpha);
                alpha++;
            } else 
                printf(" "); 
            
        }
        printf("\n"); 
    }
    
    // Lower Alphabetic rev trangle
    
    for (int i = 4; i >=1; i--) {
        
        for (int j = i; j < 5; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("%c",alpha);
                alpha++;
            } else 
                printf(" "); 
            
        }
        printf("\n"); 
    }
    return 0;
}

