#include<stdio.h>

int Count(int iNo) 
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0) 
    {
        iNo = -iNo; // Make the number positive
    }

    while (iNo != 0) 
    {
        iDigit = iNo % 10;
        if (iDigit < 6) 
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);
    printf("%d\n", iRet);

    return 0;
}