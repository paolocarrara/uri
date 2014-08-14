#include <stdio.h>

int main (void)
{
	int n[20], aux;

	for (aux = 19; aux >= 0; aux--) {
		scanf("%i", &n[aux]);
	}

	for (aux = 0; aux < 20; aux++) {
		printf ("N[%i] = %i\n", aux, n[aux]);
	}

	return 0;
}
