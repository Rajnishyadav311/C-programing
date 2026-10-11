#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Find sum of cubes of digits
    while (num > 0) {
        remainder = num % 10;          // Get last digit
        sum = sum + (remainder * remainder * remainder); // Cube of digit
        num = num / 10;                // Remove last digit
    }

    // Check Armstrong
    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}