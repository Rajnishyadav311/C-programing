#include <stdio.h>

int main() {
    int num, original, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;          // Get last digit
        reverse = reverse * 10 + remainder; // Make reverse number
        num = num / 10;                // Remove last digit
    }

    // Check palindrome
    if (reverse == original)
        printf("%d is a Palindrome number.", original);
    else
        printf("%d is not a Palindrome number.", original);

    return 0;
}