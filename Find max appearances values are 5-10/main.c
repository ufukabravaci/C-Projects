#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[8]= {7,5,6,9,6,7,10,7};
    int countArr[6]= {0};
    int i;
    for(i=0; i<8; i++){
        countArr[arr[i]-5]++;
    }

    int maxIndex=0 ;
    for(i=1; i<6; i++){
        if(countArr[i]> countArr[maxIndex]){
            maxIndex=i;
        }

    }
    printf("The value of %d is appeared the most with total of %d appearances!\n",maxIndex+5 ,countArr[maxIndex]);
    return 0;
}
