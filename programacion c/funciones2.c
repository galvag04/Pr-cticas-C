#include <stdio.h>
int suma_n_numeros(int num);

int main(){
	int entero;
	printf("Escribe un valor entero positivo: \n");
	scanf("%d", &entero);
	while(entero <= 0){
		printf("El valor ha de ser positivo: \n");
		scanf("%d", &entero);
	}

	int resultado = suma_n_numeros(entero);
	printf("La suma de los %d primeros numeros enteros es:\n %d", entero, resultado);

return 0;
}

int suma_n_numeros(int num){
	int x = 0;
	for(int i = 0; i <= num; i++){
		x = x + i;
	}
return(x);
}
