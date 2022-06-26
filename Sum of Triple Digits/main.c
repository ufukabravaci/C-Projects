#include <stdio.h>
#include <stdlib.h>

int main()
{

   int number , ones , tens , hundreds ;

   printf("Enter the 3 digits number : ");
   scanf("%d",&number);

   ones = number % 10 ;

   hundreds = number / 100 ;

   tens = ( number / 10 ) % 10 ;

   printf ("Sum of digits are %d",ones+hundreds+tens);
    return 0;
}
