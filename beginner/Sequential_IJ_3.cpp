#include <stdio.h>

int main (void)
{
	int i, j;

	for (i = 1, j = 5; i < 10; i+=2, j+=2)
		printf ("I=%i J=%i\nI=%i J=%i\nI=%i J=%i\n", i, j+2, i, j+1, i, j);

	return 0;
}
