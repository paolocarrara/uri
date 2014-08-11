#include <stdio.h>

int main (void)
{
	float a, b, c, d, e, f, avr = 0.0;
	int t = 0;

	scanf ("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

	if (a > 0) {
		t++;
		avr += a;
	}
	if (b > 0) {
		t++;
		avr += b;
	}
	if (c > 0) {
		t++;
		avr += c;
	}
	if (d > 0) {
		t++;
		avr += d;
	}
	if (e > 0) {
		t++;
		avr += e;
	}
	if (f > 0) {
		t++;
		avr += f;
	}

	printf ("%i valores positivos\n%0.1f\n", t, avr/(t*1.0));

	return 0;
}
