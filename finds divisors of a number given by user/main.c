#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    int i=0, counter=2;// 1 and num included.
    for(i=2 ;i<=num/2 ;i++){
        if(num%i == 0){
            counter++;

    }
    }
    printf("%d has %d divisors!\n",num ,counter);
    return 0;
}
