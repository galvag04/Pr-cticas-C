#include <stdio.h>
void divisores(int numero, int jiji);
void esprimo(int primo);

int main(){
	int entero;
	printf("Introduce un numero entero: ");
	scanf("%d", &entero);
	esprimo(entero);
return 0;
}

void esprimo(int primo){
	int i = 1;
	int x = 0;
	while(i<=primo){
		if(primo % i == 0){
			x += 1;
		}
		i++;
	}
divisores(x, primo);
}

void divisores(int numero, int jiji){
	int z = 1;
		if(numero == 2){
			printf("1\n");
			printf("Los divisores del entero %d son el\n%d y el propio %d, ya que es primo", jiji, z, jiji);
		}
					
		if(numero > 2){
			printf("0\nel entero %d no es primo:\n", jiji);
			for(int i = 1; i <= jiji; i++){
				if(jiji % i == 0){
					printf("%d ", i);
				}
			}
		}
}