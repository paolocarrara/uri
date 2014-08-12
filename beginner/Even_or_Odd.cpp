#include <stdio.h>

int main (void) {

	int n, m, sign;
	
	scanf ("%i", &n);

	while (n-->0) {
		scanf ("%i", &m);
		if (m > 0) {
			sign = 1;
		}
		else if (m < 0) {
			m *= -1;
			sign = 0;
		}
		else {
			sign = -1;
		}
		if (sign != -1) {
			if (m%2 == 0) {
				printf ("EVEN ");
			}
			else {
				printf ("ODD ");
			}
			if (sign) {
				printf ("POSITIVE\n");
			}
			else {
				printf ("NEGATIVE\n");
			}
		}
		else {
			printf ("NULL\n");
		}
	}

	return 0;
}
