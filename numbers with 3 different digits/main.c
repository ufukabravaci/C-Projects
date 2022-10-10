#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num=102 , counter=0 , hundreds , tens , ones ;
    ones = num%10 ;
    tens = (num/10)%10 ;
    hundreds = num/100 ;

    while ((hundreds != tens) && (hundreds != ones) && (tens != ones) && (num<999)){
        num++;
        counter++;
    }

    printf("There are %d numbers with 3 different digits!\n",counter);
    return 0;
}
