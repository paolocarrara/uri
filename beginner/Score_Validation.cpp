#include <stdio.h>
#include <stdio.h>

int main (void)
{
	int n = 0;
	float x, t = 0.0;

	while (n != 2) {
		scanf ("%f", &x);

		if (x >= 0.0 && x <= 10.0) {
			t += x;
			n++;
		}
		else {
			puts ("nota invalida");
		}
	}

	printf ("media = %0.2f\n", t/2.0);

	return 0;
}
