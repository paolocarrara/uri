#include <stdio.h>

int main (void) {

	int n = 0, pos1, pos2, i, j, m;

	while (n != EOF) {
		scanf ("%i", &n);
		pos1 = 0;
		pos2 = n-1;
		for (i = 0; i < n; i++) {
			if (i == pos2) {
				printf ("2");
			}
			else if (i == pos1) {
				printf ("1");
			}
			else {
				printf ("3");
			}
			if (i%n == 0) {
				printf ("\n");
				pos1++;
				pos2--;
				i = 0;
			}
		}
	}
	
	return 0;
}
