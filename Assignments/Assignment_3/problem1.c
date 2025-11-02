#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}