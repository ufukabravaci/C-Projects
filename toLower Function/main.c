#include <stdio.h>
#include <stdlib.h>

char toLower(char letter)

{
    if (letter>= 'A' && letter <= 'Z')
        return letter - 'A' + 'a' ;
    else return -1 ;


}



int main()
{
    char letter ;

    printf("Enter a character : ");
    scanf ("%c", &letter);

    if (letter>= 'A' && letter <= 'Z')
    printf("%c", toLower(letter));

    else
        printf("%d", toLower(letter));
    return 0;
}
