#include <stdio.h>

int main (void)
{
	float table[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
	int code, n;
	scanf ("%i %i", &code, &n);
	printf ("Total: R$ %0.2f\n", table[code-1]*n);
	return 0;
}
