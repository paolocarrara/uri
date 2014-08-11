#include <stdio.h>

int main (void)
{
	int b, e;
	scanf ("%i %i", &b, &e);
	if (e < b)
		e +=24;
	printf ("O JOGO DUROU %i HORA(S)\n", e-b);

	return 0;
}
