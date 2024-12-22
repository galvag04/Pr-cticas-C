#include <stdio.h>

float grados_farenheit(float num);

int main(){

	float n;
	scanf("%f", &n);
	printf("Los grados farenheit son: %.2f\n", grados_farenheit(n));

	return 0;
}

float grados_farenheit(float num){
	float farenheit = (num * 9.0/5.0) + 32.0;

	return(farenheit);
}