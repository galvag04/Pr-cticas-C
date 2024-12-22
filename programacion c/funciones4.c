#include <stdio.h>
#include <math.h>
void menu(int num);
double volumen_cono(float radio, float altura);
float volumen_ortoedro(float largo, float ancho, float alto);

int main(){
	int n;
	printf("elija si quiere el resultado del volumen de un cono (1), de un ortoedro (2) o salir (3):\n");
	scanf("%d", &n);
	while(n < 1 || n > 3){
		printf("ERROR\n");
		scanf("%d", &n);
	}
	menu(n);
	return 0;
}

void menu(int num){
	if(num == 1){ // VOLUMEN CONO
		float r, h;
		printf("Introduce el valor del radio y la altura del cono: \n");
		scanf("%f %f", &r, &h);
				printf("El volumen del cono es:\n%f", volumen_cono(r, h));
	}
	if(num == 2){ // VOLUMEN ORTOEDRO
		float lar, anch, alt;
		printf("Introduce el largo, el ancho, y la altura del ortoedro:\n");
			scanf("%f %f %f", &lar, &anch, &alt);
				printf("El volumen del ortoedro es:\n%f", volumen_ortoedro(lar, anch, alt));
	}
	if(num == 3){
		printf("Ha salido con exito.\n");
	}
}	

double volumen_cono(float radio, float altura){
	float pi = 3.141592653589793;
	double resultado = ((1.0/3.0)*(pi)*pow(radio, 2)*(altura));
return(resultado);
}

float volumen_ortoedro(float largo, float ancho, float alto){
	float resultado = largo * ancho * alto;
return(resultado);
}
