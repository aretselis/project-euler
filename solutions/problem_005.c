#include <stdio.h>
#include <math.h>

#define SIZE 4
#define MAX_NUMBER 20

int *prime_factoring(int number)
{
    int i, j, k, prime;
    static int factor_array[SIZE];

    // Initialize array
    for(k=0; k<SIZE; k++)
    {
        factor_array[k] = 0;
    }

    k=0;
    while(number%2==0)
    {
        number = number/2;
        factor_array[k]=2;
        k++;   
    }

    for(i=3; i<=number; i+=2)
    {
        if (number%i == 0){
            while(number%i==0)
            {
                factor_array[k]=i;
                k++;
                number = number/i;
            }
        }
    }
    return factor_array;
}

void naive_solution(int number)
{
    int i, j, k, max, counter, results_array[MAX_NUMBER][SIZE];
    long int result;
    int *pointer;
    pointer = prime_factoring(number);

    // Initialize results array
    for (i = 0; i < MAX_NUMBER; i++)
    {
        for(j=0; j < SIZE; j++)
        {
            results_array[i][j] = 0;
        }
    }
    
    // Main factors logging loop
    for(i = 1; i <= MAX_NUMBER; i++)
    {
        pointer = prime_factoring(i);
        for(j=0; j<SIZE; j++)
        {
            results_array[i-1][j] = *(pointer+j);
        } 
    }

    // Result calculation
    result = 1;
    counter = 0;
    max = 0;
    for(k=1; k<=MAX_NUMBER; k++)
    {
        for(i=0; i<MAX_NUMBER; i++)
        {
            for(j=0; j<SIZE; j++)
            {
                if (results_array[i][j]==k)
                {
                    counter += 1;
                }
            }
            if(counter>max)
            {
                max = counter;
            }
            counter = 0;
        }
        if(max!=0)
        {
            result *= (pow(k, max));
        }
        max = 0;
    }
    printf("The result is %li\n", result);
}

void speedy_solution(int number)
{
    long int result=1; 
    int i, j, counter, temp, prime_check=1;
    counter = 0;
    // Deal with 2s first
    while (result<number)
    {
        result *= 2;
        if(result>number)
        {
            result /= 2;
            break;
        }
    }

    // Check for the rest of the primes
    for(i=3; i<=number; i+=2)
    {
        for(j=2; j<i; j++)
        {
            if (i%j==0)
            {
                prime_check = 0;
            }
        }
        if(prime_check==1)
        {
            temp = i;
            while (temp<number)
            {
                temp *= i;
                if(temp>number)
                {
                    temp /= i;
                    break;
                }
            }
            result *= temp;
        }
        prime_check = 1;
    } 
    printf("The result is %li", result);
}

int main()
{
    int n = 20;
    naive_solution(n);
    speedy_solution(n);
    return 0;
}