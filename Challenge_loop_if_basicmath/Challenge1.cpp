#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int a, b, n, t;
    double avg, sum = 0, sum2 = 0, sd;
    scanf("%ld %ld", &a, &b);
    n = fabs(a - b) + 1;
    if (a < b)
    {
        for (long int i = a; i <= b; i++)
        {
            printf("%ld ", i);
            sum += i;
        }
    }
    else
    {
        for (long int i = a; i >= b; i--)
        {
            printf("%ld ", i);
            sum += i;
        }
    }
    avg = sum / n;
    printf("\nAverage = %.1lf\n", avg);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    for (long int i = a; i <= b; i++)
    {
        sum2 = sum2 + pow(i - avg, 2);
    }
    printf("SD = %.2lf", sqrt(sum2 / (n - 1)));
    return 0;
}
