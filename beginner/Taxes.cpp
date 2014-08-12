#include <stdio.h>

int main (void)
{
	float salary;
	float tax;

	scanf ("%f", &salary);

	tax = 0.0;

	if (salary > 2000.00) {
		if (salary < 3000.00)
			tax = (salary-2000.00)*(0.08);
		else
			tax = 80;
	}
	if (salary > 3000.00) {
		if (salary < 4500.00)
			tax += (salary-3000.00)*(0.18);
		else
			tax += 270;
	}
	if (salary > 4500.00) {
		tax += (salary-4500.00)*(0.28);
	}
	
	printf ("R$ %0.2f\n", tax);

	return 0;
}
