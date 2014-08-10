#include <stdio.h>

int main (void)
{
	char name[256];
	double salary, sold;
	scanf ("%s %lf %lf", name, &salary, &sold);
	printf ("TOTAL = R$ %0.2lf\n", salary+(sold*0.15));
	return 0;
}
