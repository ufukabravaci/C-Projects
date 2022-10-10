#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sourceArr[8]= {'A','b','r','a','v','A','R','i'};
    int countArr[53]={0};
    int i;
    for(i=0; i<8; i++){
            if(sourceArr[i] >= 'a' && sourceArr[i] <= 'z')
        countArr[sourceArr[i]-97]++;
            else if(sourceArr[i] >= 'A' && sourceArr[i] <= 'Z')
        countArr[sourceArr[i]-'A'+ 26]++;
            else if(sourceArr[i] == ' ')
        countArr[53]++;
    }
    int maxIndex=0;
    for(i=1; i<=53; i++){
        if(countArr[i] > countArr[maxIndex]){
            maxIndex=i;
        }
    }
    if (maxIndex < 26){
            printf("%c appeared the most in this array with %d times.\n", maxIndex+97, countArr[maxIndex]);
    }
    else if (maxIndex <= 52){
            printf("%c appeared the most in this array with %d times.\n", maxIndex+65-26, countArr[maxIndex]);
    }

    else if (maxIndex == 53){
            printf("' ' appeared the most in this array with %d times.\n", countArr[maxIndex]);
    }

    return 0;
}
