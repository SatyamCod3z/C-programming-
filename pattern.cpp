/* write a c program to print this following pattern 
12345
1224
123
12
1           */
#include<stdio.h>
int main()

{
	int n, i, j;
	printf("Enter number for size of pattern :");
	scanf("%d", &n);
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
