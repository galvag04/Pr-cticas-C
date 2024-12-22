#include <stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("introduce una cantidad de grados:");
	scanf("%f", &celsius);
	fahrenheit = celsius * 9/5 +32;
	printf("El número introducido de grados celsius en fahrenheit %f es", fahrenheit);
	return 0;
}	