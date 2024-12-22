#include <stdio.h>
int cuadrados(int numero);
int main(){
	int n;
	printf("Dime un valor n: \n");
	scanf("%d", &n);
	if(n <= 0){
		return -1;
	}
	printf("El resultado de la suma de los cuadrados de n numeros es: %d", cuadrados(n));
}
	int cuadrados(int base){
	int i, cuadrado, resultado
	i = 0
	cuadrado = n * n;
	while(i<=n){
		resultado = cuadrado * n;
		i++;		
	}
	return (resultado);

} //ESTÁ MAL