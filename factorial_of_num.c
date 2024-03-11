#include <stdio.h>
unsigned int factorial(unsigned int n)
{
	int result = 1, i;
	for (i = 2; i <= n; i++) {
		result =result* i;
	}

	return result;
}


int main()
{
	int num;
	printf("Enter value of n");
	scanf("%d",&num);
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}
