//  Expected Output
// Enter the number of rows: 5
//   
//      *  
//     * *  
//    *   *  
//   *     *  
//  * * * * *

#include <stdio.h>

int main() 
{
    int n; // Number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print upper half of the pattern
    for (int i = 1; i <= n-1; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print hollow pyramid
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*"); // Print stars for first and last column
            } else 
                printf(" "); // Print spaces for hollow part
            
        }
        printf("\n"); // Move to the next line
    }
    for (int i = 1; i <= n; i++)
    {
        printf("* "); // Print the Last line
    }
    
    return 0;
}
