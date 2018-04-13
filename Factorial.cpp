#include <cstdio>

int enterData();
long long int factorial(int);

int main()
{
	int n;

	n = enterData();
	printf("Factorial de %i: %lli\n", n, factorial(n));
	// printf("Factorial de %i: %I64d\n", n, factorial(n)); // windows

	return 0;
}

int enterData()
{
	int n;

	printf("Ingrese el numero a verificar: ");
	scanf("%i", &n);

	return n;
}

long long int factorial(int n)
{
	long long int fac = 1;

	if(n >= 2){
		for(int i = 1; i <= n; i++){
			fac *= i;
		}
	}

	return fac;
}