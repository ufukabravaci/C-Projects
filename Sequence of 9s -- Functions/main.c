#include <stdio.h>
#include <stdlib.h>


int nineNumber(int length)
{
    int num=0 ;
    int i ;

    for (i=0 ; i<length ; i++)
    {
        num = num*10 + 9 ;
    }
    return num ;
}





int main()
{
    int lengthseq, result ;
    printf("Please enter a lenght for the n-th sequence : ");
    scanf("%d", &lengthseq);

    result = nineNumber(lengthseq);

    printf("Result = %d \n", result);

    return 0;
}
