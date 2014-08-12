#include <stdio.h>

int main (void)
{
	int a = 0;
	int g = 0;
	int d = 0;
	int i = 0;

	while (i != 4) {
		scanf ("%i", &i);
		if (i == 1) a++;
		else if (i == 2) g++;
		else if (i == 3) d++;
	}

	printf ("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", a, g, d);

	return 0;
}
