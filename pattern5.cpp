/* write a program to print this pattern
    *
   ***
  *****
 *******
*********    */
#include <stdio.h>

#include <stdio.h>

int main() {

    int rows = 5;

    // Outer loop: Controls rows
    for (int i = 1; i <= rows; i++) {

        // First inner loop: Prints spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Second inner loop: Prints stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Moves to the next row
        printf("\n");
    }

    return 0;
}
