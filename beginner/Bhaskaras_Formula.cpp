#include <stdio.h>
#include <math.h>

int main (void)
{
	float a, b, c;

	float delta;
	float x1, x2;

	scanf ("%f %f %f", &a, &b, &c);

	delta = b*b - 4*a*c;
	
	if (delta < 0 || a == 0) {
		printf ("Impossivel calcular");
	}
	else {
		x1 = (-b + sqrt(delta))/(2.0*a);
		x2 = (-b - sqrt(delta))/(2.0*a);
		printf ("R1 = %0.5f\nR2 = %0.5f\n", x1, x2);
	}

	return 0;
}
