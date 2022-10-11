#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fp ;
    printf("Enter the text file's name please:");
    char textName[100]={0};
    scanf("%s", textName);
    char myChar;
    printf("Enter your char:");
    scanf(" %c",&myChar);
    fp= fopen(textName,"r");
    int counter=0;
    if(fp != NULL)
        {
            while(!feof(fp))
            {
                while(fgetc(fp) == myChar)
                {
                    counter++;
                }

            }
    fclose(fp);
        printf("%c appeared %d times in %s\n", myChar, counter, textName);
        }
    return 0;
}
