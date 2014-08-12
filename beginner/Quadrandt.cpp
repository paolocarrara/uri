#include <stdio.h>

int main (void)
{
	int x, y;
	
	scanf ("%i %i", &x, &y);

	while (x != 0 && y != 0) {
		if (x > 0 && y > 0)
			printf ("primeiro\n");
		if (x > 0 && y < 0)
			printf ("quarto\n");
		if (x < 0 && y > 0)
			printf ("segundo\n");
		if (x < 0 && y < 0)
			printf ("terceiro\n");
		scanf ("%i %i", &x, &y);
	}

	return 0;
}
