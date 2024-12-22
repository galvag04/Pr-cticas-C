#include <stdio.h>
#include <math.h>
int main(){
	int base, exponente;
	printf("Dime la base y el exponente: ");
	scanf("%d%d", &base, &exponente);
	if(base > 0 && exponente > 0){
		double potencia = pow(base,exponente);
		printf("La potencia es: %.2f", potencia);
	}
	else{
		printf("La potencia es: Error\n");
	}
	return 0;
}