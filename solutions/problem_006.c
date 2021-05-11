#include <stdio.h>
#include <math.h>

int sum_of_squares(int n)
{
    int i, result=0;

    for(i=1; i<=n; i++)
    {
        result += pow(i, 2);
    }
    return result;
}

int square_of_sum(int n)
{
    int i, result=0;
    for (i=1; i<=n; i++)
    {
        result += i; 
    }
    result = pow(result, 2);
}

int main()
{
    int number=100;
    int result_a, result_b, answer;
    result_a = sum_of_squares(number);
    result_b = square_of_sum(number);
    answer = result_b - result_a;
    printf("The answer is %d", answer);
    return 0;
}