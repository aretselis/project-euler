#include <stdio.h>
#include <math.h>

#define TARGET 1000

int solution()
{
    int a, b, c, sum;
    long int product;

    for(a=1; a < TARGET; a++)
    {
        for(b=1; b < TARGET; b++)
        {
            c = TARGET - a - b;
            if(pow(c,2)==pow(a, 2) + pow(b, 2))
            {
                product = a*b*c;
                printf("a=%d, b=%d, c=%d", a,b,c);
                printf("The answer is %li", product);
                return 0;
            }
        }
    }
    return 0;
}

int main()
{
    solution();
    return 0;
}