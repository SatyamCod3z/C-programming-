/* write a c program to print the following pattern
   4
  434
 43234
4321234
 43234
  434
   4      */

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 7; i++)
    {
        // Print spaces
        int spaces = (i <= 4) ? 4 - i : i - 4;
        for(j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        // Print decreasing numbers
        int n = (i <= 4) ? 5 - spaces : 5 - spaces;

        for(j = n - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        // Print increasing numbers
        for(j = 2; j <= n - 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

