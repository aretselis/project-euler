#include <stdio.h>

#define MAX_DIGITS 6  // Max digits number for a product of two 3-digit numbers

int palindrome_number_check(int n)
{
    // Checks if a number is palindrome
    // Input is number n 
    // Output is 0 if n is not palindrome or 1 if n is palindrome
    int counter;
    for(counter=0; counter< MAX_DIGITS; counter++)
    {
        printf("%d", n%10);
        n = n/10;
    }
    return 0;
}

int main()
{
    int number = 998001;
    int result;
    result = palindrome_number_check(number);
    printf("The result is %d", result);
    return 0;
}