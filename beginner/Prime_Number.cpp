#include <stdio.h>

int main (void)
{
	int n, i, q, m, p;
	
	scanf ("%i", &m);

	while (m-->0) {
	
		p = 1;
		
		scanf ("%i", &n);
	
		if (n > 2) {
			if (n%2 == 0) {
				p = 0;
			}
			else {
				for (i = 3, q = n/2; i <= q; i+=2)
					if (n%i == 0) {
						p = 0;
						i = q;
					}
			}
		}
		
		if (p)
			printf ("%i eh primo\n", n);
		else
			printf ("%i nao eh primo\n", n);
				
	}

	return 0;
}
