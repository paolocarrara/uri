#include <stdio.h>
#include <math.h>

int main (void)
{
	int a, b, p, area, size;

	a = 1;

	while (a != 0) {

		scanf ("%i", &a);
	
		if (a != 0) {
			scanf ("%i %i", &b, &p);

			area = a*b;
	
			size = sqrt(area*(100/p*1.0));

			printf ("%i\n", size);
		}

	}
	
	return 0;
}
