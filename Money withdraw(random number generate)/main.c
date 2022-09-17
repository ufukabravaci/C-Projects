#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    float balance = (rand() % 2000);
    float withdraw = 0 ;

    printf("Your balance : %.2f\n",balance);
    printf("Please enter the amounth of withdraw : \n");
    scanf("%f", &withdraw);

    if (balance>=withdraw){
            printf("New balance is %.2f \n", balance-withdraw);

    }
    else
        printf("Error ! Low balance ! \n");

    return 0;
}
