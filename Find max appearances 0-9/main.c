#include <stdio.h>
#include <stdlib.h>

// 2 3 5 1 2 3 4 1 2 2

int main()
{
    int sourceArr[20] = {0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
    int counterArr[10]= {0};
    int i;
    for(i=0; i<20; i++){
        counterArr[sourceArr[i]]++;
    }
    int maxIndex=0 ;
    for(i=1; i<10; i++){
        if(counterArr[i]> counterArr[maxIndex]){
            maxIndex=i;
        }

    }
    printf("The value of %d is appeared the most with total of %d appearances!\n",maxIndex ,counterArr[maxIndex]);
    return 0;
}
