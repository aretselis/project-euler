#include <stdio.h>
#include <math.h>

int max_prime_factor(long long int number)
{
    long long int counter, max_prime;

    // Remove 2s from search
    while(number%2==0)
    {
        number = number/2;   
    }

    // Main searching loop
    for(counter=3; counter <= sqrt(number); counter += 2)
    {
        if (number%counter == 0){
            while(number%counter==0)
            {
                max_prime = counter;
                number = number/counter;
            }
        }
    }
    max_prime = number;
    return max_prime;
}

int main()
{
    long long int result;
    long long int n = 600851475143;
    result = max_prime_factor(n);
    printf("The result is %lld", result);

    return 0;
}
