#include <stdio.h>

#define kml	12.0

int main (void)
{
	int t, vm;
	scanf ("%i %i", &t, &vm);
	printf ("%0.3f\n", (t*vm)/kml);
	return 0;
}
