#include <stdio.h>

int main (void)
{
	int years, mounths, days;

	scanf ("%i", &days);
	years = days/365;
	days %= 365;
	mounths = days/30;
	days %= 30;
	printf ("%i ano(s)\n%i mes(es)\n%i dia(s)\n", years, mounths, days);

	return 0;
}
