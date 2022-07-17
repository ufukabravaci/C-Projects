#include <stdio.h>
#include <stdlib.h>

// read sequence of nums
// return the min with recursive function
// 3 --> x, ,y, z find min between x, y , z



int findMin (int n)
{

    int userInput ;
    int minSoFar ;
    printf("Enter a num : ");
    scanf("%d", &userInput);

    if (n > 1)
    {
        minSoFar = findMin(n-1);
        if (minSoFar < userInput)
            return minSoFar
            ;
            else
            return userInput ;
    }
return userInput;
}





int main()
{
    int lenght ;
    printf("Enter the number of the elements in the sequence : ");
    scanf("%d", &lenght);

    printf("Minimum number in this sequence is %d", findMin(lenght));
    return 0;
}
