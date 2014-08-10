#include <stdio.h>

int main (void)
{
	int a, b, c;
	int maior;
	int dif;

	scanf ("%i %i %i", &a, &b, &c);

	dif = a - b;
	if (dif < 0)
		dif *= -1;
	maior = (a+b+dif)/2;

	dif = maior - c;
	if (dif < 0)
		dif *= -1;
	
	maior = (maior+c+dif)/2;
	
	printf ("%i eh o maior\n", maior);

	return 0;
}
