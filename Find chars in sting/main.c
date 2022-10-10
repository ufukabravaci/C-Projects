#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This program reads a char and a string from user. Finds out how many times that char used in that string.*/

int main()
{
    int i, counter=0, len ;
    char ch;
    char* str;
    str= (char*) malloc(sizeof(char)*100);
    printf("Enter the char!\n");
    scanf("%c",&ch);
    fflush(stdin);
    printf("Enter the string!\n");
    gets(str);
    len=strlen(str);
    for(i=0 ;i<len ;i++){
        if(ch == str[i] )
            counter++;
    }
    printf("%c is used %d times in that string!",ch ,counter);
}
