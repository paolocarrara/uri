#include <stdio.h>

int main (void)
{
	int km;
	float l;
	scanf ("%i %f", &km, &l);
	printf ("%0.3f km/l\n", km/l);
	return 0;
}
