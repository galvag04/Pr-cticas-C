#include <stdio.h>
#define VECTOR 10
int numdivisores(int entero);
int esprimo(int primo);
void leer_vector(int r[VECTOR]);
int imprime_vector(int r[VECTOR]);

int main(){
	int pr[VECTOR];
	leer_vector(pr);
	for(int i = 0; i < VECTOR; i++){
		printf("%d\n", pr[i]);
	}
return 0;
}

void leer_vector(int r[VECTOR]){
	int numero = 2;
	int i = 0;
		while(i<10){
			if(esprimo(numero)){
				r[i] = numero;
				i++;
			}
			numero++;

		}
}
int numdivisores(int numero){
	int x = 0;
	for(int i = 1; i<=numero;i++){
		if(numero%i == 0){
			x += 1;
		}
	}
return(x);
}


int esprimo(int entero){
	int i;
	int x = numdivisores(entero);
	if(x>2){
		 i = 0;
	}

	if(x<=2){
		 i = 1;
	}
return(i);
}