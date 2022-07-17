#include <stdio.h>
#include <stdlib.h>


// read sequence of nums
// return the max with recursive function
// 3 --> x, ,y, z find max between x, y , z

int findmax( int num)
{
    int maxSoFar ;
    int userInput ;

    printf("Enter an input :");
    scanf("%d", &userInput);

    if (num > 1)
    {
        maxSoFar =  findmax(num-1) ;
        if (userInput > maxSoFar)
            return userInput ;
        else
            return maxSoFar ;
    }
    return userInput ;
}



int main()
{
    int lenght ;
    printf("Enter the number of elements in sequence :");
    scanf("%d", &lenght);
    printf("max = %d", findmax(lenght));
    return 0;
}
