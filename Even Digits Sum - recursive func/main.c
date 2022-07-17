#include <stdio.h>
#include <stdlib.h>

//recursive function
// example ==> 136 = 1+3+6 = 10 return 1(even)
//             566 = 5+6+6+ = 17 return 0(odd)    // counter tekse


int digitSum(n)
{
    int resultSoFar ;
    if (n<10)
        if(n%2 == 0 )
            return 1;
        else
            return  0 ;

     resultSoFar = digitSum(n/10 );
     if (n%10%2 == 0 ) // if its even
            if(resultSoFar == 1) // if the result is even
                return 1;
                    else return 0;



     else
        if (resultSoFar == 1 )
            return 0;
        else
            return 1;


}

int main()
{
    int num;
    printf("Enter a num :");
    scanf("%d", &num);
    printf("%d", digitSum(num));
    return 0;
}
