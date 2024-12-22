#include <stdio.h>
int main(){
	int Num;
	printf("Escribe el número del mes: \n");
	scanf("%d", &Num);
	if(Num == 1){
		printf("Enero\n");
	}
	if(Num == 2){
		printf("Febrero\n");
	}
	if(Num == 3){
		printf("Marzo\n");
	}
	if(Num == 4){
		printf("Abril\n");
	}
	if(Num == 5){
		printf("Mayo\n");
	}
	if(Num == 6){
		printf("Junio\n");
	}
	if(Num == 7){
		printf("Julio\n");
	}
	if(Num == 8){
		printf("Agosto\n");
	}
	if(Num == 9){
		printf("Septiembre\n");
	}
	if(Num == 10){
		printf("Octubre\n");
	}
	if(Num == 11){
		printf("Noviembre\n");
	}
	if(Num == 12){
		printf("Diciembre\n");
	}
	if(Num <= 0 || Num > 12){
		printf("Error\n");
	}

	return 0;
}