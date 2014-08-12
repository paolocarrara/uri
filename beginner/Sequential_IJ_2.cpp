#include <stdio.h>

int main (void)
{
	int i;
	
	for (i = 1; i < 10; i+=2) {
		printf ("I=%i J=7\nI=%i J=6\nI=%i J=5\n", i, i, i);
	}

	return 0;
}
