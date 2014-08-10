#include <stdio.h>

#define PI	3.14159

int main (void)
{
	int r;
	scanf ("%i", &r);
	printf ("VOLUME = %0.3f\n", (4.0/3.0)*PI*(r*r*r));
	return 0;
}
