#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size  , currentvalue=0 , previousvalue=0 ;
    int veryAscendingFlag=1 ;

    do
    {
    printf("Enter the size (greater than 0) : ");
    scanf("%d", &size);
    }while (size<=0);

        do
        {
            printf("Insert Value :");
            scanf("%d", &currentvalue);

            if (currentvalue<0)
                printf("number is not positive ! ");

            else
            {
                if  (currentvalue <= previousvalue )
                {
                   veryAscendingFlag=0 ;
                }
                previousvalue = currentvalue;
                size-- ;
            }
        }while (size>0);
        if (veryAscendingFlag==1)
            printf("This sequence is very ascending !");

        else
            printf("This sequence is NOT very ascending ! ");


    return 0;
}
