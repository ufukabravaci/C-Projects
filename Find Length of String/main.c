#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int findLenght (char *str)
{
    int lenght=0 , i=0 ;

    while (str[i] != '\0')
    {
        lenght ++;
        i++ ;
    }
    return lenght ;

}



int main()
{
    int lenght ;
    char fullName[SIZE] ;
    printf("Enter your full name please : ");
    gets(fullName) ;

    lenght = findLenght (fullName) ;
    printf("Lenght of your full name is : %d \n", lenght);
return 0 ;
}
