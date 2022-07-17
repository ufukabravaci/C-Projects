#include <stdio.h>
#include <stdlib.h>

// n= 0 L =2 , n=1 L=1 , n>1 L =Ln-1 + Ln-2
// 2 1 3 4 7 11 18

int LucasRecursive (int n)
{
    if (n == 0)
        return 2 ;

    if (n == 1)
        return 1;

    if (n>1)
        return LucasRecursive(n-1) + LucasRecursive(n-2) ;

}




int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Lucas value at intex %d = %d \n", n , LucasRecursive(n) );
    return 0;
}
