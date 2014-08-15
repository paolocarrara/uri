#include <stdio.h>

int main (void)
{
	int n, k, c, r, s;
	char l;

	scanf ("%i", &n);

	c = 0;
	r = 0;
	s = 0;

	while (n-->0) {
		scanf ("%i %c", &k, &l);

		if (l == 'C') 		c += k;
		else if (l == 'R') 	r += k;
		else 			s += k;
	}

	printf ("Total: %i cobaias\n", c+r+s);
	printf ("Total de coelhos: %i\n", c);
	printf ("Total de ratos: %i\n", r);
	printf ("Total de sapos: %i\n", s);

	printf ("Percentual de coelhos: %0.2f %\n", (100.0)*c/(c+r+s));
	printf ("Percentual de ratos: %0.2f %\n", (100.0)*r/(c+r+s));
	printf ("Percentual de sapos: %0.2f %\n", (100.0)*s/(c+r+s));

	return 0;
}
