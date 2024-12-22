#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define VECT 26
#define VECT2 9
void inicializar_vector(char r[VECT]);

int main(){
	char letras[VECT];
	char password[VECT2];

	inicializar_vector(letras);
	srand(time(NULL));

	for(int i = 0; i < VECT2 -1; i++){
		int index = rand() % VECT;
        password[i] = letras[index];
      }
	password[VECT2 - 1] = '\0';
	printf("La contrasena generada es: %s\n", password);
return 0;
}


void inicializar_vector(char r[VECT]){
	for(int i = 0; i < VECT; i++){
		r[i] = 'a' + i;
	}
}