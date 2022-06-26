#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,n,d,an;
    printf("Enter the initial term of this arithmetic sequence:");
    scanf("%d",&a1);
    printf("Enter the number of elements in this arithmetic sequence:");
    scanf("%d",&n);
    printf("Enter the difference of this arithmetic sequence:");
    scanf("%d",&d);

    an=a1+(n-1)*d;

    printf("The %d-th number of this arithmetih sequence is %d\n\n",n,an);

    return 0;
}
