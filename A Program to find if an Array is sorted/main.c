#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
   int arr[SIZE] ;
   int i, flag = 1 ;

   for (i=0 ; i < SIZE ; i++)
   {
       printf("Enter the element number %d : ", i+1);
       scanf("%d", &arr[i]);
   }
    for (i=0 ; i < SIZE -1 ; i++ )
    {
        if (arr[i] >= arr [i+1])
        {
            flag = 0 ;
            break ;
        }

    }
    if (flag == 1)
        printf("This array is sorted ! \n");
    else
        printf("This array is  not sorted ! \n");


    return 0;
}
