#include <stdio.h>
#include <stdlib.h>

int charactersToIntegers (char cha1 , char cha2 , char cha3)

{
    int hundreds , tens , units , finalResult ;

    if (cha1 >= '0' && cha1 <= '9')
        hundreds = cha1 - '0' ;
    else
        return 0 ;
    if (cha2 >= '0' && cha2 <= '9')
        tens = cha2 - '0';
        else
            return 0;

        if (cha3 >= '0' && cha3 <= '9')
            units = cha3 - '0';
        else
            return 0;

        return hundreds*100 + tens*10 + units ;


}


int main()
{
    char ch1, ch2 , ch3 ;

    printf("Enter 3 character between 0 and 9 : ");
    scanf("%c %c %c", &ch1 , &ch2 , &ch3);

    printf("%d", charactersToIntegers(ch1 , ch2 , ch3 ));
    return 0;
}
