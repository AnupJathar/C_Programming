#include<stdio.h>

void Pattern(int iRow, int iCol) 
{
    for(int i = 1; i <= iRow; i++) 
    {
        if(i % 2 != 0) 
        {
            char ch = 'A';
            for(int j = 1; j <= iCol; j++) 
            {
                printf("%c\t", ch);
                ch++;
                if(ch > 'D') 
                {
                    ch = 'A';
                }
            }
        } 
        else 
        {
            char ch = 'a';
            for(int j = 1; j <= iCol; j++) 
            {
                printf("%c\t", ch);
                ch++;
                if(ch > 'd') 
                {
                    ch = 'a';
                }
            }
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    
    return 0;
}