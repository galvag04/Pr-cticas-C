#include <stdio.h>
int main()
{
	int mes;
	printf("Escribe un número entre el 1 y el 12:");
	scanf("%d", &mes);
	
	if(mes == 1){
		printf("enero\n");
}
	if(mes == 2){
	printf("febrero\n");
}
	if(mes == 3){
	printf("marzo\n");
} 
	if(mes == 4){
	printf("abril\n");
}
	if(mes == 5){
	printf("mayo\n");
	} 
	if(mes == 6){
	printf("junio\n");
}
	if(mes == 7){
	printf("julio\n");
} 
	if(mes == 8){
	printf("agosto\n");
}
	if(mes == 9){
	printf("septiembre\n");
} 
	if(mes == 10){
	printf("octubre\n");
} 
	if(mes == 11){
	printf("noviembre\n");
}
	if(mes == 12){
	printf("diciembre\n");
} 
	if(mes < 1 || mes > 12){
	printf("ERROR");
}
	return 0;
}