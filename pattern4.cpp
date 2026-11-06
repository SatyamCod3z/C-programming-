#include<stdio.h>

int main() {
    int i, j, n;

    printf("Enter the n: ");
    scanf("%d", &n);

    // Outer loop: Controls rows
    for(i = n; i >= 1; i--) {

        // First inner loop: Prints spaces
        for(j = n; j > i; j--) {
            printf(" ");
        }

        // Second inner loop: Prints numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
