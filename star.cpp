// Write a c program to print a pattern in star form //
#include<stdio.h>
int main()
{
	int n, i, j;  // i for row, j for column //
	printf("Enter any number :");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++) // here column will be inside row because there has to be row inorder to print column //
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

