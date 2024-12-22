#include <stdio.h>
int main(){
	int Num;
	printf("Escribe la nota numérica:");
	scanf("%d", &Num);
	if(Num == 5 || Num == 6){
		printf("La nota es Aprobado\n");
	}
	if(Num == 7 || Num == 8){
		printf("La nota es Notable\n");
	}
	if(Num == 9 || Num == 10){
		printf("La nota es Sobresaliente\n");
	}
	if(Num >= 0 && Num < 5){
		printf("La nota es Suspenso\n");
	}
	if(Num < 0 || Num > 10){
		printf("La nota es Suspenso\n");
	}
	
	return 0;
}