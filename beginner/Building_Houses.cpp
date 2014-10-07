#include <stdio.h>
#include <math.h>

int main (void)
{
	int a, b, p, area, size;

	scanf ("%d", &a);

	while (a != 0) {
		scanf ("%d %d", &b, &p);

		area = a*b;
		size = sqrt(area*(100.0/p));
		printf ("%d\n", size);

		scanf ("%d", &a);
	}
	
	return 0;
}
