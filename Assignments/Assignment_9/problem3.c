#include <stdio.h>

int EvenFactorial(int iNo) 
{
    int i = 0, iResult = 1;
    if (iNo < 0) 
    {
        iNo = -iNo;
    }
    for (i = iNo; i >= 2; i -= 2)
    {
        iResult *= i;
    }
    return iResult;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);
    
    return 0;
}