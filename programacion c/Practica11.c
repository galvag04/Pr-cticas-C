#include <stdio.h>
int main()
{ //Pedimos la base y el exponente
	int base, exponente, potencia, i;
	printf("Introduce la base:\n");
	scanf("%d", &base);
	while(base <= 0){
		printf("El valor no puede ser menos o igual a 0");
		scanf("%d", &base);
	}
	printf("Introduce el exponente:\n");
	scanf("%d", &exponente);
	while(exponente <= 0){
		printf("El valor no puede ser menos o igual a 0");
		scanf("%d", &exponente);
	}
	// Pedimos la potencia
	i = 1;
	potencia = 1;
	while(i<=exponente){
		potencia = potencia * base;
		i++;
	}
	printf("La potencia de base %d, y exponente %d, es: %d", base, exponente, potencia);
	return 0;
}