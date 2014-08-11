#include <stdio.h>

int main (void)
{
	int x, i;
	scanf ("%i", &x);
	for (i = 1; i <= x; i += 2)
		printf ("%d\n", i);
	return 0;
}
