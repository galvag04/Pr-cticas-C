#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void init_matrix(int *m, int A, int B);
int compute_solution(int *m, int A, int B, int C, int D);
void procesa_cadena(char c1[], char L, int C, int D, char c2[]);

int main(){

	int a, b, c, d;
	char l;
	char cadena1[100];
	char cadena2[100];

	srand(time(NULL));

	printf("Introduce una letra: ");
	scanf("%c", &l);

	printf("Introduce 4 enteros: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a <= 0 || b <= 0 || c < 0 || d < c || d >= b) {
		printf("Los valores de a, b, c y d no son válidos. Asegúrate de que:\n");
		printf("- a y b son mayores que 0.\n");
		printf("- c es mayor o igual a 0 y menor o igual a d.\n");
		printf("- d es menor que b.\n");
		return 1;
	}
	getchar();

	printf("Introduce la cadena:\n");
	fgets(cadena1, sizeof(cadena1), stdin);

	size_t len = strlen(cadena1);

	if(len > 0 && cadena1[len - 1] == '\n'){
		cadena1[len - 1] = '\0';
	}

	int *matriz = (int*)malloc(a * b * sizeof(int));

	if(matriz == NULL){
		printf("Error. No se pudo asignar memoria.\n");

		return 1;
	}
	init_matrix(matriz, a, b);

	printf("El resultado de la suma de los elementos es: %d\n", compute_solution(matriz, a, b, c, d));

	printf("La cadena resultante es:\n");
	procesa_cadena(cadena1, l, c, d, cadena2);
	printf("\n%s\n", cadena2);

	free(matriz);

	return 0;
}

void init_matrix(int *m, int A, int B){
	for(int i = 0; i < A; i++){
		for(int j = 0; j < B; j++){
			*(m + i * B + j) = rand() % 16 + 5;
		}
	}
}

int compute_solution(int *m, int A, int B, int C, int D){
	int x = 0;
	for(int i = 0; i < A; i++){
		for(int j = 0; j < B; j++){
			if(j >= C && j <= D){
				x += *(m + i * B + j);
			}
		}
	}
	return(x);
}

void procesa_cadena(char c1[], char L, int C, int D, char c2[]){

	strcpy(c2, c1);

	size_t len = strlen(c2);

	for(int i = 0; i < len; i++){
		if(c2[i] == 'a' && i >= C && i <= D){
			c2[i] = L;
		}
	}
}