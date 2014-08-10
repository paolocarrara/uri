#include <stdio.h>

#define PI	3.14159

__attribute__ ((optimize("Ofast"), flatten, nonnull))
int main (void)
{
	double r;
	scanf("%lf", &r);
	printf ("A=%.4f\n", r*r*PI);
	return 0;
}
