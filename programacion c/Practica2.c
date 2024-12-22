#include <stdio.h>
int main()
{
	int segundos, minutos, horas, dias, segundos1, minutos1, horas1, dias1;
	printf("Introduce un número de segundos");
	scanf("%d", &segundos);
	minutos=segundos/60;
	segundos1=segundos%60;
	horas=minutos/60;
	minutos1=minutos%60;
	dias=horas/24;
	dias1=dias%24;

	printf("El número introducido de segundos son %d, %d, %d", minutos, horas, dias);
	return 0;
}
