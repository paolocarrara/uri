#include <stdio.h>

#define	a	0.0000000
#define	b	25.0000000
#define	c	50.0000000
#define	d	75.0000000
#define	e	100.0000000

int main (void)
{
	float n;
	scanf ("%f", &n);
	if (n < 0.0 || n > 100.0) {
		printf ("Fora de intervalo\n");
	}
	else {
		if (n >= a && n <= b) {
			printf ("Intervalo [0,25]\n");
		}
		else if (n > a && n <= b) {
			printf ("Intervalo (0,25]\n");
		}
		else if (n >= a && n < b) {
			printf ("Intervalo [0,25)\n");
		}
		else if (n > b && n <= c) {
			printf ("Intervalo (25,50]\n");
		}
		else if (n > c && n <= d) {
			printf ("Intervalo (50,75]\n");
		}
		else if (n > d && n <= e) {
			printf ("Intervalo (75,100]\n");
		}
	}

	return 0;
}
