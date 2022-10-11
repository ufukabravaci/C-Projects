#include <stdio.h>
#include <stdlib.h>

/* Read filename from user.
create a array for lowercases
print the number of times each lowercase letter appears in the file.*/

int main()
{
    char fileName[40]={0};
    char currentChar;
    int frequencyArray[26]={0};
    int i;
    FILE* fp;
    printf("Enter the file name please:");
    scanf("%s",fileName);

    fp = fopen(fileName,"r");
    if(fp != NULL)
    {
        while(!feof(fp))
        {
            currentChar=fgetc(fp);
            if(currentChar >= 'a' && currentChar<= 'z')
            {
                frequencyArray[currentChar - 'a']++;
            }

        }
    }
    for(i=0; i<26; i++)
    {
       printf("Letter %c appeared in this file %d times.\n", i+'a' , frequencyArray[i]);
    }
    fclose(fp);

    return 0;
}
