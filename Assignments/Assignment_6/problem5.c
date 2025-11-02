#include<stdio.h>

float Percentage(int iTotal, int iObtained) 
{
    if(iTotal == 0) 
    {
        return 0.0;
    }
    return (float)iObtained / iTotal * 100;
}
int main() 
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%", fRet);

    return 0;
}