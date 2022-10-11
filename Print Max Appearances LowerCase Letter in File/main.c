#include <stdio.h>
#include <stdlib.h>

/* Read the filename from user.
create an frequencyAppearances array
for lowercases a-z
print the most appeared character. */


int main()
{
    char fileName[20]={0};
    int frequencyAppearances[26]={0};
    char currentChar;
    printf("Please enter the filename:\n");
    scanf("%s",fileName);
    FILE* fp;
    fp=fopen(fileName,"r");

    if(fp != NULL)
    {
        while(!feof(fp))
        {
           currentChar = fgetc(fp);
        if(currentChar <= 'z' && currentChar >= 'a')
        {
            frequencyAppearances[currentChar -'a']++;
        }
        }


    }
    fclose(fp);

    int i,max=0;
    char maxChar;
    for(i=0; i<26; i++)
    {
        if(frequencyAppearances[i] > max)
        {
            max = frequencyAppearances[i];
            maxChar = 'a' + i;
        }
    }
    printf("%c is the most appeared char. It appeared %d times.\n", maxChar, max);
    return 0;
}
