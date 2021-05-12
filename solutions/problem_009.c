#include <stdio.h>
#include <math.h>

#define TARGET 1000

int double_solution()
{
    int a, b;
    double c, sum;
    long int product;

    for (a = 1; a < TARGET; a++)
    {
        for (b = 1; b < TARGET; b++)
        {
            c = pow(a, 2) + pow(b, 2);
            c = sqrt(c);
            sum = a + b + c;
            if (sum == TARGET && b != c)
            {
                product = a * b * c;
                printf("The answer is %li\n", product);
                return 0;
            }
            if (sum > TARGET)
            {
                break;
            }
        }
    }
    return 0;
}


int solution()
{
    int a, b, c, sum;
    long int product;

    for(a=1; a < TARGET; a++)
    {
        for(b=1; b < TARGET; b++)
        {
            c = TARGET - a - b;
            if(pow(c, 2)==pow(a, 2) + pow(b, 2))
            {
                product = a*b*c;
                printf("The answer is %li", product);
                return 0;
            }
            
        }
    }
    return 0;
}

int main()
{
    double_solution();
    solution();
    return 0;
}