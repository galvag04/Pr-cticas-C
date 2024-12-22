#include <stdio.h>
int main(){
	int Num;
	printf("Introduce un número: ");
	scanf("%d", &Num);
	if(Num > 0){
		int suma = 0;
		for(int i = 1; i <= Num; i++){
			suma += i;
		}
		printf("La suma es: %d", suma);
	}
	else{
		printf("La suma es: Error");
	}

	return 0;
}