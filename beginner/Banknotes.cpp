#include <stdio.h>

int main (void)
{
	int n, m;
	int cem, cinquenta, vinte, dez, cinco, dois;
	scanf ("%i", &n);
	m = n;
	cem = n/100;
	n %= 100;
	cinquenta = n/50;
	n %= 50;
	vinte = n/20;
	n %= 20;
	dez = n/10;
	n %= 10;
	cinco = n/5;
	n %= 5;
	dois = n/2;
	n %=2;

	printf ("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", m, cem, cinquenta, vinte, dez, cinco, dois, n);
	return 0;
}
