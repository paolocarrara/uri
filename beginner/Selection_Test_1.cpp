#include <stdio.h>

int main (void)
{
	int a, b, c, d;
	int ok = 0;

	scanf ("%i %i %i %i", &a, &b, &c, &d);

	if ( ( b>c ) && ( d>a ) && ( (c+d)>(a+b) ) && ( c>0 ) && ( d>0 ) && ( a%2 == 0 ) )
		ok = 1;

	if (ok)
		printf ("Valores aceitos\n");
	else
		printf ("Valores nao aceitos\n");
	
	return 0;
}
