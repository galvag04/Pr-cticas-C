#include <stdio.h>

int main(){

	int edades[10];
	int i = 0;
	float media = 0;

 		printf("Introduce diez edades: \n");
 		while(i<0){
 			scanf("%d", &edades[i]);
 			media = media + edades[i];
 			i++;
 		}
 	media = media/10;
 	printf("La media es: %f \n", media);
 	return 0;
}