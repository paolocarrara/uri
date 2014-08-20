#include <stdio.h>

int main (void)
{

	int n, i, j, k, l;
	
	n = 1;

	while (n != 0) {
	
		scanf ("%i", &n);

		for (i = 0; i < n; i++) {
			for (j = 0, k = 0, l = 0; j < n; j++) {
				if (j < n-1) {
					printf ("%i ", k+1);
					if (k < i && l == 0) {
						k++;
					}
					else if (l == 1){
						k--;
					}
					if (k >= i) {
						l = 1;
					}
				}
				else {
					printf ("%i\n", k+1);
				}
			}
		}
	
	}

	return 0;
}
