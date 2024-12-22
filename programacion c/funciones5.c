#include <stdio.h>
void imprime_pares_intervalo(int primero, int segundo);

int main(){
	int num1, num2;
	printf("Introduce dos numeros sabiendo que el primero debe ser menor:\n");
	scanf("%d %d",&num1, &num2);
	while(num1>num2){
		printf("El primer número debe ser menor que el segundo:\n");
		scanf("%d %d",&num1, &num2);
	}
	printf("Los pares que hay entre el numero %d y el numero %d son:\n",num2, num1);
	imprime_pares_intervalo(num1, num2);
	return 0;
}

void imprime_pares_intervalo(int primero, int segundo){
	int i = segundo - 1;
	while(i > primero){
		if(i % 2 == 0){
			printf("%d\n", i);
			i--;
		}
		if(i % 2 != 0){
			i--;
		}
	}
}