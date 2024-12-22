#include <stdio.h>
int main()
{
	float kms, millas, yardas, pies;
	printf("Escribe un número de km:");
	scanf("%f", &kms);
	millas = kms * 0.6213712;
	yardas = kms * 1093.613;
	pies = kms * 3280.84;
	printf("El número de km en millas %f, yardas %f y pies %f, es:", millas, yardas, pies);
	return 0;
}