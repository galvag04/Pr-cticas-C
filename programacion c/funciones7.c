#include <stdio.h>
void divisores(int num);
int main(){
	int entero;
	printf("Introduce un entero: ");
	scanf("%d", &entero);
	divisores(entero);
return 0;
}

void divisores(int num){
	int i = num;
	while(i <= num){
	if(num % i == 0){
		printf("%d ", i);
		i--;
	}
	if(num % i != 0){
		i--;
	}
	}
}