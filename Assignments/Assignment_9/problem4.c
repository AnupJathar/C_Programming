#include <stdio.h>

int OddFactorial(int iNo) 
{
    int i = 0, iResult = 1;
    if (iNo < 0) 
    {
        iNo = -iNo;
    }
    for (i = iNo; i >= 1; i -= 2) 
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);
    
    return 0;
}