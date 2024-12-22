#include <stdio.h>
int main()
{
	int numero;
	printf("Escribe un número del 1 al 12: \n");
	scanf("%d", &numero);
	switch(numero) {
	case 1:
		printf("El número introducido es el mes de Enero");
		break;
	case 2:
		printf("El número introducido es el mes de Febrero");
		break;
	case 3:
		printf("El número introducido es el mes de Marzo");
		break;
	case 4:
		printf("El número introducido es el mes de Abril");
		break;
	case 5:
		printf("El número introducido es el mes de Mayo");
		break;
	case 6:
		printf("El número introducido es el mes de Junio");
		break;
	case 7:
		printf("El número introducido es el mes de Julio");
		break;
	case 8:
		printf("El número introducido es el mes de Agosto");
		break;
	case 9:
		printf("El número introducido es el mes de Septiembre");
		break;
	case 10:
		printf("El número introducido es el mes de Octubre");
		break;
	case 11:
		printf("El número introducido es el mes de Noviembre");
		break;
	case 12:
		printf("El número introducido es el mes de Diciembre");
		break;
	default:
		printf("El número introducido es INcorrecto");
		break;
	}
return 0;
} 