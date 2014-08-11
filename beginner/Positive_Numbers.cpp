#include <stdio.h>

int main (void)
{
	float a, b, c, d, e, f;
	int t = 0;
	scanf ("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	if (a > 0)
		t++;
	if (b > 0)
		t++;
	if (c > 0)
		t++;
	if (d > 0)
		t++;
	if (e > 0)
		t++;
	if (f > 0)
		t++;

	printf ("%i valores positivos\n", t);

	return 0;
}
