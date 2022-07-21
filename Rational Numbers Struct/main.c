#include <stdio.h>
#include <stdlib.h>

typedef struct rational {
int numerator ;
int denominator ;
}Rational;

void rationalIncrement (Rational *rPtr)
{
    (*rPtr).numerator = (*rPtr).numerator + (*rPtr).denominator ;

}
// Rational r1 = {1,3};
// rationalIncrement(&r1);

void rationalDecrement(Rational *rPtr){
(*rPtr).numerator = (*rPtr).numerator - (*rPtr).denominator ;

}
// Rational r1 = {7,5};
// rationalDecrement(&r1)



Rational rationalAddition(Rational r1 , Rational r2)
{
    Rational result ;
    result.numerator = r1.numerator * r2.denominator + r1.denominator * r2.numerator ;
    result.denominator = r1.denominator * r2.denominator ;
    return result ;
}


Rational rationalSubtraction(Rational r1 , Rational r2)
{
    Rational result ;
    result.denominator = r1.denominator + r2.denominator ;
    result.numerator = r1.numerator * r2.denominator - r1.denominator * r2.numerator ;
    return result;
}
// r1 = {1,3} r2={2,5} r3={-1 , 15}

int main()
{

    return 0;
}
