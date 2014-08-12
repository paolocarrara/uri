#include <stdio.h>

int main (void)
{
	float a, b, c, d, media, end = 0;

	scanf("%f %f %f %f", &a, &b, &c, &d);

	media = ( (a*2)+(b*3.0)+(c*4.0)+(d) )/10.0;

	printf ("Media: %0.1f\n", media);

	if (media >= 7.0) {
		printf ("Aluno aprovado.\n");
	}
	else {
		printf ("Aluno em exame.\n");
		scanf ("%f", &end);
		printf ("Nota do exame: %0.1f\n", end);
		if (end >= 5.0) {
			printf ("Aluno aprovado.\n");
		}
		else {
			printf ("Aluno reprovado.\n");
		}
	}
	
	if (end == 0.0) {
		printf ("Media final: %0.1f\n", media);
	}
	else {
		printf ("Media final: %0.1f\n", (media+end)/2.0);
	}

	return 0;
}
