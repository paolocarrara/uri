#include <stdio.h>

#define W1	2.0
#define	W2	3.0
#define W3	5.0
#define T	10.0
#define Media(a, b, c)	((a*W1)+(b*W2)+(c*W3))/T

__attribute__ ((optimize("Ofast"), nonnull, flatten))
int main (void)
{
	float a, b, c;
	scanf ("%f %f %f", &a, &b, &c);
	
	printf ("MEDIA = %0.1f\n", Media(a, b, c));

	return 0;
}
