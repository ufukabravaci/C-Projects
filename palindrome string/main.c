#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20


int main()
{
    char sentence[SIZE];
    int isPalindrome = 1;


    printf("Enter string: ");
    gets(sentence);


    for (int i=0, j=strlen(sentence)-1; i < strlen(sentence)/2; i++, j--)
    {
        if (sentence[i] != sentence[j])
            isPalindrome = 0;
    }


    if (isPalindrome)
        printf("The sentence is a palindrome.\n");
    else
        printf("The sentence is not a palindrome.\n");
}
