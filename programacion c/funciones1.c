#include <stdio.h>
void calcula_nota(int nota);

int main(){
	int n, resultado;

	printf("Introduce una nota: \n");
		scanf("%d", &n);
		if(n < 0){
			printf("El resultado no puede ser negativo:");
			scanf("%d", &n);
		}
	calcula_nota(n);

	return 0;
}

void calcula_nota(int nota){

	if(nota < 5){
		printf("Suspenso\n");
	}

	if(nota >= 5 && nota < 7){
		printf("Aprobado\n");
	}
			
	if(nota >= 7 && nota < 9){
		printf("Notable\n");
	}
	
	if(nota >= 9 && nota < 11){
		printf("Sobresaliente\n");
	}
}