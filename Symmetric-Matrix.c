// Expexted Output in 7 input :
// 7 7 7 7 7 7 7 7 7 7 7 7 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 2 1 2 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 7 7 7 7 7 7 7 7 7 7 7 7 

#include<stdio.h>

int main()
{
    int n;
scanf("%d", &n);
int min = 0;
for (int i = 1; i <= 2*n - 1; i++){
    for (int j = 1; j<=2*n-1; j++){
        int a = i;
        if(i>n) a = 2*n-i;
        int b = j;
        if(j>n) b = 2*n-j;
        if (a<b)
            min = a;
        else
            min = b;         
        printf("%d ",n + 1 - min);  
    }
    printf("\n");
}
return 0;
}