#include <stdio.h>

#define w1	3.5
#define w2	7.5
#define	T	(w1+w2)
#define media1(a, b) ((a*w1)+(b*w2))/T
#define media2(a, b) ((a*w1)+(b*w2))

int main (void)
{
	float a, b;
	scanf ("%f %f", &a, &b);
	printf ("MEDIA = %0.5f\n", media1(a, b));

	return 0;
}
