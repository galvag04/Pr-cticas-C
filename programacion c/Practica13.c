#include <stdio.h>
int area_triangulo(int base, int altura);
int main(){
	int b, h;
	printf("Introduce la Base: \n");
	scanf("%d", &b);
	while(b<=0){
		printf("El valor debe ser positivo");
		scanf("%d", &b);
	}
	printf("Introduce la Altura: \n");
	scanf("%d", &h);
	while(h<=0){
		printf("El valor no puede ser negativo");
		scanf("%d", &h);
	}
	printf("El area del triangulo es: %d\n", area_triangulo(b, h));
	return 0;
}
	int area_triangulo(int base, int altura){
		return (base * altura) / 2;
	}