#include <stdio.h>

int main (void)
{
	int i, j;
	int t;
	scanf ("%i", &t);
	for (i = 0, j = 0; i < 1000; i++) {
		printf ("N[%i] = %i\n", i, j);
		j++;
		if (j == t)
			j = 0;
	}
	

	return 0;
}
