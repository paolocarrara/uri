#include <stdio.h>

int main (void)
{
	int n, t, x, y, aux;

	scanf ("%i", &n);

	while (n-->0) {
		scanf("%i %i", &x, &y);

		if (x > y) {
			aux = y;
			y = x;
			x = aux;
		}

		if (x%2 == 0) 
			x++;
		else
			x+=2;
		for (t = 0;x < y; x+=2) {
			t += x;
		}
		printf ("%i\n", t);
	}

	return 0;
}
