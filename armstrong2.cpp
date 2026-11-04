// write a program to find all the armstrong numbers between 1 and 1000 //
#include <math.h>
#include <stdio.h>

int main()
{
    int n, num, r, sum = 0, c = 0;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for(num = 1; num <= 1000; num++)
    {
        n = num;
        sum = 0;
        c = 0;

        while(n > 0)
        {
            c++;
            n = n / 10;
        }

        n = num;

        while(n > 0)
        {
            r = n % 10;
            sum = sum + pow(r, c);
            n = n / 10;
        }

        if(num == sum)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
