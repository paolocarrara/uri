#include <stdio.h>

int main (void)
{
	int n, m;
	scanf ("%i", &n);
	for (m = n; n-->1; m *=n);
	printf ("%i\n", m);

	return 0;
}
