#include <stdio.h>

#define MAX_DIGITS 6  // Max digits number for a product of two 3-digit numbers

int palindrome_number_check(int n)
{
    // Checks if a number is palindrome
    // Input is number n 
    // Output is 0 if n is not palindrome or 1 if n is palindrome
    
    int counter, outcome=1;
    int digits_array[MAX_DIGITS];

    // Log digits in array
    for(counter=0; counter < MAX_DIGITS; counter++)
    {
        digits_array[counter] = n % 10;
        n = n/10;
    }

    // Check if palindrome
    for(counter=0; counter < MAX_DIGITS/2; counter++)
    {
        if(digits_array[counter]==digits_array[MAX_DIGITS-1-counter])
        {
            continue;
        }
        else
        {
            outcome = 0;
            break;
        }
        
    }
    return outcome;
}

int main()
{
    int first_number, second_number;
    int number = 102231;
    first_number = palindrome_number_check(number);
    printf("Result is %d", first_number);
    return 0;
}