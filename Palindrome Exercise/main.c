#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// 1 3 5 3 1

int main()
{
   int arr[SIZE] ;
   int i , finder = 1 ;

   for (i=0 ; i<SIZE ; i++)
   {
       printf ("Enter %d . character of an array : ", i+1);
       scanf("%d", &arr[i]);
   }

for (i=0 ; i<SIZE/2 ; i++)
{
    if (arr[i] != arr[SIZE - i -1])
       {
           finder = 0 ;
            break ;

       }
}

   if (finder == 1)
   {
       printf ("This erray is palindrome !\n");
   }
   else
    printf("This erray is not palindrome !\n ");

   return 0;
   }







