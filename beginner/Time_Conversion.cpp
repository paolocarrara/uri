#include <stdio.h>

int main (void)
{
	int seconds, hours, minutes;

	scanf ("%i", &seconds);
	hours = seconds/3600;
	seconds %= 3600;
	minutes = seconds/60;
	seconds %= 60;
	printf ("%i:%i:%i\n", hours, minutes, seconds);

	return 0;
}
