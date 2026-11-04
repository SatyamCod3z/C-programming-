#include<math.h>
#include<stdio.h>
int main()
{
	int n, num, rem, sum=0, c=0;
	printf("\n Enter a number :");
	scanf("%d", &n);
	num = n;
	while(n>0)
	{
		c++;
		n = n/10;
	}
	n = num;
	while(n>0)
	{
		rem = n%10;
		sum = sum + pow(rem, c);
		n = n/10;
	}
	if(num == sum)
	{
		printf("\n it is an armstrong number");
	}
	else
	{
		printf("\n it is not an armstrong number");
	}
	return 0;
	
}
