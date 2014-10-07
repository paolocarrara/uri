#include <stdio.h>
#include <unistd.h>

int fd = fileno (stdin);

int main (void)
{
	short int n;

	scanf ("%hi", &n);

	while (n != EOF) {
		if (n > 0) {
			puts ("vai ter duas!");
		}
		else {
			puts ("vai ter copa!");
		}

		read (fd, &n, 2);

		/*scanf ("%hi", &n);*/
	}

	return 0;
}
