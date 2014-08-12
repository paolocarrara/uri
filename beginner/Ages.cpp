#include <stdio.h>

int main (void)
{
	int i = -1;
	int t = 0;
	int in = 0;

	while (in >= 0) {
		t += in;
		i++;
		scanf ("%i", &in);	
	}

	printf ("%0.2f\n", t/(i*1.0));

	return 0;
}
