#include <stdio.h>

int main (void)
{
	short int n = 1;
	while (n != EOF) {
		scanf ("%hi", &n);
		if (n > 0)
			puts ("vai ter duas!");
		else
			puts ("vai ter copa!");
	}

	return 0;
}
