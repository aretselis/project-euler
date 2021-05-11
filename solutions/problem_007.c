#include <stdio.h>
#include <math.h>

int prime_check(long int number)
{
    long int i;
    if (number == 2 || number == 3)
    {
        return 1;
    }
    if (number % 2 == 0)
    {
        return 0;
    }
    if (number % 3 == 0)
    {
        return 0;
    }
    i = 5;
    while (i <= sqrt(number))
    {
        if (number % i == 0 || number % (i + 2) == 0)
        {
            return 0;
        }
        i += 6;
    }
    return 1;
}

void prime_number_finder(long int n)
{
    long int result = 0;
    long int counter = 0, i, j, current_number=4;
    
    for(i=2; counter<n; i++){
        if(prime_check(i)==1)
        {
            counter += 1; 
        }
        result = i;
    }
    printf("The result is %li", result);
}

int main()
{
    int desired_prime_number = 10001;
    prime_number_finder(desired_prime_number);
    return 0;
}