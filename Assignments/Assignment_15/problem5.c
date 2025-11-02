#include<stdio.h>

int CountDiff(int iNo) 
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if (iNo < 0) 
    {
        iNo = -iNo; // Make the number positive
    }

    while (iNo != 0) 
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0) 
        {
            iEvenSum += iDigit; // Add to even sum
        } else 
        {
            iOddSum += iDigit; // Add to odd sum
        }
        iNo = iNo / 10;
    }

    return (iEvenSum - iOddSum); // Return the difference
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}