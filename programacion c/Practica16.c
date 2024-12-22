#include <stdio.h>
#include <math.h>
double distancia(double x1, double y1, double z1, double x2, double y2, double z2);
int main(){

	double x1, y1, z1, x2, y2, z2;

	printf("Introduce el valor del primer punto en el espacio: \n");
	scanf("%lf %lf %lf", &x1, &y1, &z1);

	printf("Ahora introduce el valor del segundo punto en el espacio: \n");
	scanf("%lf %lf %lf", &x2, &y2, &z2);

	printf("La distancia euclidea entre el punto uno: %.2lf, %.2lf, %.2lf, y el punto dos: %.2lf, %.2lf, %.2lf, es: \n %.2lf", x1, y1, z1, x2, y2, z2, distancia(x1, y1, z1, x2, y2, z2));
return 0;

}
	

double distancia(double x1, double y1, double z1, double x2, double y2, double z2){
		return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
	}
	
