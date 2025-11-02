#include <stdio.h>

double CircleArea(float fRadius) 
{
    double PI = 3.14;
    return PI * fRadius * fRadius;
}

int main() 
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area: %.4f\n", dRet);
    
    return 0;
}