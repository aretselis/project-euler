#include <stdio.h>
#include <math.h>

#define MAX_DIGITS 6  // Max digits number for a product of two 3-digit numbers
#define DIGITS 3

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

int find_max_palindrome(){
    // Computes the max palindrome product and returns it
    int first_number, second_number, product, pali_check, answer=1;   
    for(first_number = pow(10, DIGITS) - 1; first_number>=pow(10, DIGITS-1); first_number--)
    {
        for(second_number = pow(10, DIGITS) - 1; second_number>=pow(10, DIGITS-1); second_number--)
        {
            product = first_number * second_number;
            pali_check = palindrome_number_check(product);
            if (pali_check == 1 && product>answer)
            {
                answer = product;
            }
        }
    }
    return answer;
}

int main()
{
    int result;
    result = find_max_palindrome();
    printf("The result is %d", result);
    return 0;
}