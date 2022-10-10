#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int size=100;
    printf("Enter the string!\n");
    str= (char*)malloc(sizeof(char)*size);
    gets(str);
    int counter=0, i ;
    for(i=0; str[i] != '\0'; i++){
        counter++ ;
    }
    printf("This string has %d elements!",counter);
    return 0;
}
