#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sourceArr[9]= {'a','b','r','a','v','a','c','i'};
    int countArr[26]={0};
    int i;
    for(i=0; i<9; i++){
        countArr[sourceArr[i]-97]++;
    }
    int maxIndex=0;
    for(i=1; i<26; i++){
        if(countArr[i] > countArr[maxIndex]){
            maxIndex=i;
        }
    }
    printf("%c appearead the most in this array with %d times.\n", maxIndex+97, countArr[maxIndex]);
    return 0;
}
