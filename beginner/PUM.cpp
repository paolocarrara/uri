#include <stdio.h>

int main (void)
{
	int i, n;

	scanf ("%i", &n);

	i = 1;
	while (n-->0) {
		printf ("%i %i %i PUM\n", i, i+1, i+2);
		i +=4;
	}


	return 0;
}
