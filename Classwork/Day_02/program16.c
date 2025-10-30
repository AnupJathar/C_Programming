/*
    START
        Accept number and store as no
        Divide no by 2
        If the remainder is 0
            then display as even
        Othervise 
            display as odd
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                       //For Input Output
#include<stdbool.h>                     //For bool datatype

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       It is used to check even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Anup Rajendrs Jathar
//  Date :              10/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;


    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even Number\n",iValue);   }
    else
    {   printf("%d is Odd Number\n",iValue);    }

    return 0;
}