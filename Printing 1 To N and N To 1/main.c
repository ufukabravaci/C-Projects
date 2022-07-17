#include <stdio.h>
#include <stdlib.h>

void print1toN(int n)
{
    if (n >= 1 )
    {
        print1toN(n-1);
        printf("%d ", n);

    }
}

void printNto1(int n)
{
    if (n >= 1 )
    {
        printf("%d ", n);
        print1toN(n-1);


    }
}




int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d", &num );
    printf("1 to %d = ",num);
    print1toN(num);
    printf("\n%d to 1 = ",num);
    printNto1(num);
    return 0;
}
