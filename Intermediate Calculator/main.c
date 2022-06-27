#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mathoperation;
    float a,b ;

    printf("Select the mathematical operation : (+ - * / %%) ");
    scanf("%c", &mathoperation);

    printf("Enter the first number :");
    scanf ("%f",&a);
    printf("Enter the second number : ");
    scanf ("%f",&b);

    switch(mathoperation)
    {
        case '+':
            printf("Result = %.2f",a+b);
            break;

        case '-':
            printf("Result = %.2f",a-b);
            break;

        case '*':
            printf("Result = %.2f", a*b);
            break;

        case '/':
            if (b==0)
                printf("You can not divide by 0 !!");
            else
                printf("Result = %.2f",a/b);

        break;

        case '%':
            printf("Result = %.2f",fmod(a,b));
            break;

        default :
            printf("Select a valid operator!");
            break;

    }

    return 0;
}
