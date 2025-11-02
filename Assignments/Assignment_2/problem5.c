#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is an Even number\n", iValue);
    }
    else
    {
        printf("%d is an Odd number\n", iValue);
    }

    return 0;
}