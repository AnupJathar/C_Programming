//*   *   *   *   *

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    iCnt = 1;
    for(iCnt <= 5; iCnt++);
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}