// write a c program to check if a number is peterson or not //
#include<stdio.h>
int main()
{
	int n, m, r, sum=0, f, i;
	printf("\n Enter a number :");
	scanf("%d", &n);
	m = n;
	while(n>0)
	{
		r =n%10;
		f = 1;
		
		for(i=1; i<=r; i++)
		{
			f = f*i;
		}
		sum = sum + f;
		n = n/10;
	}
	if(sum == m)
	{
		printf("\n it is a peterson number");
	}
	else
	{
		printf("\n it is not a peterson number");
	}
	return 0;
}
