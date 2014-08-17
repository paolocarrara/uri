#include <stdio.h>

int main (void) {

	int n, i, j, pos1, pos2;

	n = 1;

	while (n != EOF) {
		scanf ("%i", &n);
		for (i = 0, pos1 = 0, pos2 = n-1; i < n; i++) {

			for (j = 0; j < n; j++) {
				if (j == pos2)
					printf ("2");
				else if (j == pos1)
					printf ("1");
				else
					printf ("3");
			}

			pos1++;
			pos2--;
			printf ("\n");
		}


	}
	
	return 0;
}
