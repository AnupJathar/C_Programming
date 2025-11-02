#include <stdio.h>

int Factorial(int no) 
{
    int i, fact = 1;
    
    for(i = 1; i <= no; i++)
        fact = fact * i;
    return fact;
}

int main() 
{
    int value, ans;

    printf("Enter number: ");
    scanf("%d", &value);

    ans = Factorial(value);

    printf("Factorial of number is %d", ans);

    return 0;
}