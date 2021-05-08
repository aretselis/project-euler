#include <stdio.h>

#define MAX_VALUE 4000000

int main()
{
    int counter, first_number = 1, second_number = 2, next_number;
    int summation = 2;

    while(second_number<MAX_VALUE)
    {
        next_number = first_number + second_number;
        if (next_number % 2 == 0)
        {
            summation += next_number;
        }
        first_number = second_number;
        second_number = next_number;
    }
    printf("The result is %d", summation);

    return 0;
}