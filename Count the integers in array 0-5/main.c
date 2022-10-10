#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[8]= {0,5,4,2,1,3,2,0};
    int countArr[6]= {0};
    int i;
    for(i=0; i<8; i++){
        countArr[arr[i]]++;
    }
    for (i=0; i<6; i++){
        printf("%d appeared %d times in this array!\n",i ,countArr[i]);
    }
    return 0;
}
