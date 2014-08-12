#include <stdio.h>

int main (void)
{
	int pass = 2002;
	int attempt = 0;

	scanf ("%i", &attempt);

	while (attempt != pass) {
		printf ("Senha Invalida\n");
		scanf ("%i", &attempt);
	}

	printf ("Acesso Permitido\n");

	return 0;
}
