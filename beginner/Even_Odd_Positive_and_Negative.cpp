#include <stdio.h>

int main (void)
{
	int a, b, c, d, e;
	int par = 0;
	int impar = 0;
	int pos = 0;
	int neg = 0;

	scanf ("%i %i %i %i %i", &a, &b, &c, &d, &e);
	
	if (a != 0)
		if (a > 0) pos++;
		else {
			neg++;
			a *= -1;
		}
	if (b != 0)
		if (b > 0) pos++;
		else {
			neg++;
			b *= -1;
		}
	if (c != 0)
		if (c > 0) pos++;
		else {
			neg++;
			c *= -1;
		}
	if (d != 0)
		if (d > 0) pos++;
		else {
			neg++;
			d *= -1;
		}
	if (e != 0)
		if (e > 0) pos++;
		else {
			neg++;
			e *= -1;
		}


	if (a%2 == 0) par++;
	else impar++;
	if (b%2 == 0) par++;
	else impar++;
	if (c%2 == 0) par++;
	else impar++;
	if (d%2 == 0) par++;
	else impar++;
	if (e%2 == 0) par++;
	else impar++;

	printf ("%i valor(es) par(es)\n", par);
	printf ("%i valor(es) impar(es)\n", impar);
	printf ("%i valor(es) positivo(s)\n", pos);
	printf ("%i valor(es) negativo(s)\n", neg);

	return 0;
}
