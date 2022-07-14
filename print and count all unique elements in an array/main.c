#include <stdio.h>
#include <stdlib.h>

// 1 ,3, 5 , 7 ...

int main()
{
    int values[10];
    int counter = 0 , duplicate = 0 ;
    int i , j ;


    for (i=0 ; i < 10 ; i++)
   {
       printf("Enter the the value #%d : ", i+1);
       scanf("%d", &values[i]);
   }

   for (i=0 ; i< 10 ; i++)
   {
       for (j=0 ; j<10 ; j++)
       {
           if (i == j)
            continue ;
           if (values[i] == values[j])
           {
               duplicate = 1 ;
               break;
           }
       }
       if (duplicate != 1)
       {
           printf ("\nUnique value = %d\n",values[i] );
           counter++ ;

       }
    duplicate = 0 ;
   }
    printf("\nThere are %d unique elements in this array !\n", counter);

    return 0;
}
