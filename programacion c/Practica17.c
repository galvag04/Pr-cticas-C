#include <stdio.h>
int esprimo(int num);
int main(){

int num;

	printf("Introduce un numero: \n");
	scanf("%d", &num);

	while(num<=0){
		printf("El numero debe ser positivo");
		scanf("%d", &num);
	}

	printf("%d", esprimo(num));

	return 0;
}

int esprimo(int num){
int i = 0;
	while(i<=num){
		if(num%i == 0){
			printf("1");
			i++;
		}
		if(num%i !=0){
			printf("0");
		i++;
		}
}
	return 0;
}
//ESTÁ MAL, ACABAR