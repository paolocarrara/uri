#include <stdio.h>
#include <string.h>

int main (void)
{

	char tipo[30];

	scanf ("%s", tipo);

	if (strcmp(tipo, "vertebrado") == 0) {
		scanf ("%s", tipo);
		if (strcmp(tipo, "ave") == 0) {
			scanf ("%s", tipo);
			if (strcmp(tipo, "carnivoro") == 0) {
				puts ("aguia");
			}
			else {
				puts ("pomba");
			}
		}
		else {	
			scanf ("%s", tipo);
			if (strcmp(tipo, "onivoro") == 0) {
				puts ("homem");
			}
			else {
				puts ("vaca");
			}

		}
	}
	else {
		scanf ("%s", tipo);
		if (strcmp(tipo, "inseto") == 0) {
			scanf ("%s", tipo);
			if (strcmp(tipo, "hematofago") == 0) {
				puts ("pulga");
			}
			else {
				puts ("lagarta");
			}
		}
		else {	
			scanf ("%s", tipo);
			if (strcmp(tipo, "hematofago") == 0) {
				puts ("sanguessuga");
			}
			else {
				puts ("minhoca");
			}

		}

	}

	return 0;
}
