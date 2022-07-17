#include <stdio.h>
#include <stdlib.h>

//Pn = 0 if n= 0
//Pn = 1 if n= 1
//Pn = 2*Pn-1 + Pn-2 if n> 1
// 0 1 ,2, 5 , 12,

int pell(int n)
{
    if (n==0) return 0 ;
    if (n==1) return 1 ;

    if(n>1)
        return 2*pell(n-1) + pell(n-2) ;

}

// with not recursive function
int pellNonRecursive(int n)
{
    int i ;
    int previous=0 , current=1 , temp ;
    if (n==0) return 0 ;
    if (n==1) return 1 ;

    for (i = 2 ; i<n+1 ; i++)
    {
        temp = 2*current+previous ;
        previous = current ;
        current = temp ;

    }
    return current ;
}




int main()
{
    int index ;
    printf("Enter index of Pell Sequence : ");
    scanf("%d", &index);
    printf("%dth index of Pell Sequence is = %d\n", index , pell(index));
    return 0;
}
