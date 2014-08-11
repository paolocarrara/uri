#include <stdio.h>

int main (void)
{
	float percent[5] = {0.15, 0.12, 0.10, 0.07, 0.04};
	float salary;

	scanf ("%f", &salary);

	if (salary <= 400.00)
		printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n", salary+salary*percent[0], salary*percent[0], percent[0]*100 );
	else if (salary <= 800.00)
		printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n", salary+salary*percent[1], salary*percent[1], percent[1]*100 );
	else if (salary <= 1200.00)
		printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n", salary+salary*percent[2], salary*percent[2], percent[2]*100 );
	else if (salary <= 2000.00)
		printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n", salary+salary*percent[3], salary*percent[3], percent[3]*100 );
	else if (salary > 2000.00)
		printf ("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %0.0f %%\n", salary+salary*percent[4], salary*percent[4], percent[4]*100 );

	return 0;
}
