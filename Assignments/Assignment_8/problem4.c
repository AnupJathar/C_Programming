#include <stdio.h>

void Table(int no) 
{
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d\t", no * i);
}

int main() 
{
    int value;

    printf("Enter number: ");
    scanf("%d", &value);

    Table(value);
    
    return 0;
}