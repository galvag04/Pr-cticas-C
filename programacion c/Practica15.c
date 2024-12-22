#include <stdio.h>
#include <math.h>

double pitagoras(double cateto1, double cateto2);
int main(){

double cont, op;

	printf("dime el valor del cateto contiguo: \n");
	scanf("%lf", &cont);

	while(cont<=0){
		printf("El valor debe ser mayor o igual a 0");
		scanf("%lf", &cont);
	}


	printf("Ahora dime el valor del cateto opuesto: \n");
	scanf("%lf", &op);

	while(op<=0){
		printf("El valor debe ser mayor o igual a 0");
		scanf("%lf", &op);
	}


	printf("Realizando el Teorema de Pitagoras, obtenemos que la hipotenusa del triangulo es de %.2f metros", pitagoras(cont, op));
	return 0;

}


double pitagoras(double cateto1, double cateto2){
double hip;
hip = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
return (hip);
}