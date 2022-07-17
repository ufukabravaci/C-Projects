#include <stdio.h>
#include <stdlib.h>

int totalEvenNumbers()
{
    int inputUser ;
    printf("Please enter a number: ");
    scanf("%d", &inputUser);

    if (inputUser == -1)
        return 0 ;

    if (inputUser % 2 == 0)
        return 1+ totalEvenNumbers() ;

    return totalEvenNumbers();

}



int main()
{
    int result ;
    result = totalEvenNumbers() ;
    printf ("Total occurences of even numbers in the sequence you inserted is %d \n", result);
    return 0;
}
