#include<stdio.h>

int FactorialDiff(int iNo) 
{
    // Logic to calculate the difference between even and odd factorial
    int iEven = 1, iOdd = 1;
    int i = 0;

    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    // Calculate even factorial
    for (i = iNo; i >= 2; i -= 2) 
    {
        iEven *= i;
    }

    // Calculate odd factorial
    for (i = iNo; i >= 1; i -= 2) 
    {
        iOdd *= i;
    }

    return iEven - iOdd;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);
    
    return 0;
}