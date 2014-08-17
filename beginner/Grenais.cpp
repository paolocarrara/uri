#include <stdio.h>

int main (void)
{
	int m, n, k, l, p, q, e;

	k = 1; /*Variavel que condiciona novo jogo*/
	p = 0; /*Quantidade de vitorias do inter*/
	q = 0; /*Quantidade de vitorias do Gremio*/
	e = 0; /*Total de empates*/
	l = 0; /*Total de grenais*/

	while (k == 1) {
		scanf ("%i %i", &m , &n);
		if (m > n) {
			p++;
		}
		else if (m < n) {
			q++;
		}
		else {
			e++;
		}

		l++;

		puts ("Novo grenal (1-sim 2-nao)");

		scanf ("%i", &k);
	}

	printf ("%i grenais\n", l);
	printf ("Inter:%i\n", p);
	printf ("Gremio:%i\n", q);
	printf ("Empates:%i\n", e);

	if (p > q) {
		puts ("Inter venceu mais");
	}
	else if (p < q){
		puts ("Gremio venceu mais");
	}
	else  {
		puts ("Nao houve vencedor");
	}

	return 0;
}
