#include <stdio.h>
#include <stdlib.h>

// function will receive a int
// read a sequance of number from user up until -1
// return the total number smaller than the num value

// num = 5
//6 8 3 1 7 -1
//return 2

int totalSmaller(int num)
{
    int value ;
    printf("Enter a value ('-1' means to stop!) : ");
    scanf("%d", &value);

    if (value==-1)
    {
        return 0 ;
    }
    if (value < num)
        return 1 + totalSmaller(num) ;

    if (value >= num)
        return totalSmaller(num);


}



int main()
{
    int num;
    printf("Enter the num :");
    scanf("%d", &num);
    printf("Result = %d", totalSmaller(num));
    return 0;
}
