#include <stdio.h>

int main (void)
{
	int n, x, y;

	scanf ("%i", &n);

	while (n-->0) {
		scanf ("%i %i", &x, &y);
		
		if (y != 0) {
			printf ("%0.1f\n", x/(y*1.0));
		}
		else {
			printf ("divisao impossivel\n");
		}
	}

	return 0;
}
