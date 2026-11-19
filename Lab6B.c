#include <stdio.h>
// Function to calculate factorial without recursion
int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial of a negative number is not defined.");
    }
    else
    {
        result = factorial(n);
        printf("Factorial of %d = %d", n, result);
    }

    return 0;
}
