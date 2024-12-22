#include <stdio.h>
int factorial(int num);

int main(){
	int entero;
	printf("Introduce un numero entero positivo: ");
	scanf("%d", &entero);
	while(entero < 0){
		printf("El resultado debe ser mayor o igual a cero: \n");
		scanf("%d", &entero);
	}
	printf("El factorial del valor entero %d es: %d\n", entero, factorial(entero));
return 0;
}

int factorial(int num){
	int i = 1;
	int resultado = 1;
	for(i = 1; i<=num; i++){	
	resultado =	resultado * i;
			}
return(resultado);
}