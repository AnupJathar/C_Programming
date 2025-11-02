#include<stdio.h>

int RangeSum(int iStart, int iEnd) 
{
    if (iStart > iEnd || iStart < 0 || iEnd < 0) 
    {
        return -1; // Invalid range
    }
    int sum = 0;
    for (int i = iStart; i <= iEnd; i++) 
    {
        sum += i;
    }
    return sum;
}

int main() 
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1) 
    {
        printf("Invalid range\n");
    } else 
    {
        printf("Addition is %d\n", iRet);
    }
    return 0;
}