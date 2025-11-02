#include <stdio.h>

int sum_even_numbers(int limit) 
{
    int sum = 0;
    for (int i = 2; i <= 2 * limit; i += 2) 
    {
        sum += i;
    }
    return sum;
}

int main(void) 
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("%d\n", sum_even_numbers(limit));
    
    return 0;

}