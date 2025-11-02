#include <stdio.h>

void NumberSize(int no) 
{
    if(no < 50)
        printf("Small");
    else if(no >= 50 && no < 100)
        printf("Medium");
    else
        printf("Large");
}

int main() 
{
    int value;
    printf("Enter number: ");
    scanf("%d", &value);

    NumberSize(value);
    
    return 0;

}