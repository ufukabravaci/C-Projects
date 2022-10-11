#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myChar;
    FILE* fp ;
    fp= fopen("numberOfFiles.txt","r");
    int countOfLines ;
    if(fp != NULL){
        while((myChar=fgetc(fp)) != EOF)
            {
                if(myChar == '\n')
            countOfLines++;
            }
    printf("Number of lines of this file: %d\n",countOfLines+1);

        fclose(fp);
    }
    return 0;
}
