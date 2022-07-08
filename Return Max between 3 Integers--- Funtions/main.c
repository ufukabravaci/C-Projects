#include <stdio.h>
#include <stdlib.h>


int maxbetween3 ()
{

   int num1, num2 , num3 ;

   printf("Enter num1 num2 and num3 : ");
   scanf ("%d%d%d", &num1, &num2 , &num3) ;

   if (num1>num2)
   {
       if(num1>num3)
        return num1 ;
       else
        return num3 ;
   }
    else if (num2>num3)
        return num2;
        else
            return num3 ;

}



int main()
{
    int max;

    max= maxbetween3();

    printf("Maximum is %d\n\n", max);

    return 0;
}
