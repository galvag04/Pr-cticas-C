#include <stdio.h>
int suma_n_numeros(int base, int exponente);
int main(){
	int n, x;
	printf("Introduce la base: \n");
	scanf("%d", &n);
	printf("Introduce el exponente: \n");
	scanf("%d", &x);
	printf("El resultado es de %d", suma_n_numeros(n, x));
	return 0;
}
int suma_n_numeros(int base, int exponente){
	int i=1;
	int j=1;
	int resultado;
	if(exponente == 0){
		resultado = 1;
	}
	else{
		while(i<=exponente){
			j = j * base;
			i++;
			resultado = j;
		}
		return(resultado);
	}
}