#include <stdio.h>

int main (void)
{
	int n;
	int pa, pb;
	int anos;
	double ga, gb;
	
	scanf ("%i", &n);

	while (n-->0) {
		anos = 0;
		scanf ("%i %i %lf %lf", &pa, &pb, &ga, &gb);
		ga /= 100.0;
		gb /= 100.0;
		while (pa <= pb) {
			pa += (int)pa*(ga);
			pb += (int)pb*(gb);
			anos++;
			if (anos > 100) {
				pa = pb + 1;
			}
		}
		if (anos > 100)
			printf ("Mais de 1 seculo.\n");
		else
			printf ("%i anos.\n", anos);
	}
	return 0;
}
