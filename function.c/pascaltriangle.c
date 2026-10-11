#include <stdio.h>

// function to calculate factorial
int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// function to calculate nCr
int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
