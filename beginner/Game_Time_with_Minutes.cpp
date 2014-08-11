#include <stdio.h>

int main (void)
{
	int bh, bm, eh, em, dh, dm;
	scanf ("%i %i %i %i", &bh, &bm, &eh, &em);
	if (bh > eh)
		eh += 24;

	if (bm > em) {
		eh--;
		em += 60;
	}

	dh = eh - bh;
	dm = em - bm;
	
	printf ("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", dh, dm);

	return 0;
}
