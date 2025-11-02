#include <stdio.h>

int sum_of_even_factors(int number) 
{
    int sum = 0;

    for (int i = 2; i < number; i += 2) 
    {
        if (number % i == 0) 
        {
            sum += i;
        }
    }
    return sum;
}

int main() 
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("%d\n", sum_of_even_factors(number));
    
    return 0;
}