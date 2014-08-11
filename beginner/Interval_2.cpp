#include <stdio.h>

int main (void)
{

	int n, i, in, out;
	scanf ("%i", &n);
	
	in = 0;
	out = 0;

	while (n-->0) {

		scanf ("%i", &i);

		if (i >= 10 && i <= 20)
			in++;
		else
			out++;
	}

	printf ("%i in\n%i out\n", in, out);
	
	return 0;
}
