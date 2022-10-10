#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* str;
    str= (char*) malloc(sizeof(char)*100);
    puts("Enter your string!");
    gets(str);
    int i , len=strlen(str);
    for(i=0 ; i<len ;i++){
        printf("%c",str[len-i-1]);
    }

    return 0;
}
