#include <stdio.h>

int main (void)
{
	int x;
	scanf ("%i", &x);
	if (x%2 == 0)
		x++;
	printf ("%i\n", x);
	printf ("%i\n", x+2);
	printf ("%i\n", x+4);
	printf ("%i\n", x+6);
	printf ("%i\n", x+8);
	printf ("%i\n", x+10);
	
	return 0;
}
