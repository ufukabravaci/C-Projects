#include <stdio.h>
#include <stdlib.h>

// Take the elements of the array from user. If user inputs a even warn user to input a odd number for that element.

int main()
{
    int i=0;
    int oddNumberArray [5];

    while(i<5){
    printf("Enter the %dth element for the array!\n",i+1);
    scanf("%d", &oddNumberArray[i]);
    if (oddNumberArray[i]%2==0){
        printf("Please enter a odd number.\n");
        continue;

    }

    i++;

    }

    printf("\n----------------------\n\n");
    printf("Elements Of the Array\n");
    printf("\n----------------------\n");
    for(i=0 ; i<5 ; i++){
        printf("%dth number of the array = %d\n",i+1,oddNumberArray[i]);
    }
    return 0;
}
