#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myChar;
    FILE* fp ;
    fp= fopen("fileExercises.txt","r");
    int countOfCharacter=0;
    if(fp != NULL){
        while((myChar=fgetc(fp)) != EOF ){
            printf("%c",myChar);
            countOfCharacter++;
        }
    printf("\nThere are %d characters in this file!\n",countOfCharacter);

        fclose(fp);
    }
    return 0;
}
