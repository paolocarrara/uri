#include <stdio.h>

int main (void)
{
	float m;
	int n;
        int cem, cinquenta, vinte, dez, cinco, dois;
        int um, cinquenta_cent, vinte_e_cinco_cent, dez_cent, cinco_cent, um_cent;
	
	scanf ("%f", &m);

	n = (int) m;
	m = m*100 - n*100;

        cem = n/100;
        n %= 100;
        cinquenta = n/50;
        n %= 50;
        vinte = n/20;
        n %= 20;
        dez = n/10;
        n %= 10;
        cinco = n/5;
        n %= 5;
        dois = n/2;
        n %=2;

        printf ("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n", cem, cinquenta, vinte, dez, cinco, dois);

	um = n;
	n = (int) m;
	cinquenta_cent = n/50;
	n %= 50;
	vinte_e_cinco_cent = n/25;
	n %= 25;
	dez_cent = n/10;
	n %= 10;
	cinco_cent = n/5;
	n %= 5;
	
        printf ("MOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n", um, cinquenta_cent, vinte_e_cinco_cent, dez_cent, cinco_cent, n);

	return 0;
}
