#include <cstdio>

int enterData();
bool isPrime(int);

int main()
{
	int n;

	n = enterData();
	if(isPrime(n)) printf("Es primo\n");
	else printf("No es primo\n");

	return 0;
}

int enterData()
{
	int n;

	printf("Ingrese el numero a verificar: ");
	scanf("%i", &n);

	return n;
}

bool isPrime(int n)
{
	if(n % 2 == 0) return false;

	for(int i = 0; i * i <= n; i += 2){
		if(i % n == 0) return false;
	}

	return true;
}