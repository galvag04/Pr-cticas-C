#include <stdio.h>
#include <math.h>
double resultado_potencia(int b, int e);
int main(){
	int base, exp;
	printf("Introduce el valor positivo de la base: \n");
	scanf("%d", &base);
	while(base <= 0){
		printf("El valor debe ser positivo: \n");
		scanf("%d", &base);
	}
	printf("Introduce el valor positivo del exponente: \n");
	scanf("%d", &exp);
	while(exp < 0){
		printf("El valor debe ser positivo: \n");
		scanf("%d", &exp);
	}
printf("El resultado de la potencia es:\n%2.f", resultado_potencia(base, exp));
return 0;
}

double resultado_potencia(int b, int e){
	double resultado = pow(b, e);
	return (resultado);
}