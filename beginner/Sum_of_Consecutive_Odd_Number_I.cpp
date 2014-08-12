#include <stdio.h>

int main (void)
{
	int x, y, aux;
	scanf ("%i %i", &x, &y);

	if (x > y) {
		aux = y;
		y = x;
		x = aux;
	}
	
	if (x%2 == 0)
		x++;
	else
		x+= 2;

	for (aux = 0;x < y; x+=2) {
		aux += x;
	}

	printf ("%i\n", aux);

	return 0;
}
