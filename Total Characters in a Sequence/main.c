#include <stdio.h>
#include <stdlib.h>

int totalChars(char ref)
{
    char ch ;
    printf("Enter a character :");
    scanf(" %c", &ch);
    getchar();

    if (ch == '$')
        return 0 ;

    if (ch == ref)
        return 1 + totalChars(ref) ;


    return totalChars(ref) ;

}


int main()
{
    char ref ;
    printf("Enter a referance character : ");
    scanf("%c", &ref);
    printf("%d character appeared in your sequance !\n",totalChars(ref));
    return 0;
}
