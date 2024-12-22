#include <stdio.h>
#include <math.h>

int main(){

	int n;
	printf("Menú: \n1. Cono\n2. Ortoedro\n3. Salir\nDi opción: ");
	do {
		scanf("%d", &n);

		if(n == 1){
			float b, h;
			scanf("%f%f", &b, &h);
			float cono = (1.0/3.0) * b * h;
			printf("\nEl volumen del cono es %.2f\n", cono);
		}
		else if(n == 2){
			float l, p, alt;
			scanf("%f%f%f", &l, &p, &alt);
			float ortoedro = l * p * alt;
			printf("\nEl volumen del ortoedro es %.2f\n", ortoedro);
		}
		else if(n == 3){
			return 0;
		}
	} while(n < 1 || n > 3);
	
	return 0;
}