#include <stdio.h>

int main (void)
{
	int x, y;
	scanf ("%i %i", &x, &y);
	
	if (x > y) {
		if (x%y == 0)
			printf ("Sao Multiplos\n");
		else
			printf ("Nao sao Multiplos\n");
	}
	else {
		if (y%x == 0)
			printf ("Sao Multiplos\n");
		else
			printf ("Nao sao Multiplos\n");
	}

	return 0;
}
