#include <stdio.h>

void DisplayRev(int no) 
{
    int rev = 0;
    while(no > 0) 
    {
        rev = rev * 10 + (no % 10);

        no = no / 10;
    }
    printf("%d", rev);
}

int main() 
{
    int value;
    printf("Enter number: ");
    scanf("%d", &value);

    DisplayRev(value);
    
    return 0;
}