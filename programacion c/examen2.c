#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void init_matrix(int *m, int f, int c);
int compute_solution(int *m, int f, int c, int n);
void procesa_cadena(char c1[], char c2[], int n, char letra);
void imprimir_matriz(int *m, int f, int c);


int main(){
	srand(time(NULL));
	char cadena1[100];
	printf("Introduce la cadena:\n");
	fgets(cadena1, sizeof(cadena1), stdin);
	char cadena2[100];
	char l;
	printf("Introduce una letra:\n");
	scanf("%c", &l);
	getchar();
	int fil, col, num;
	printf("Introduce 3 enteros:\n");
	scanf("%d%d%d", &fil, &col, &num);
	getchar();
	int *matriz = (int*)malloc(fil * col * sizeof(int));
	if(matriz == NULL){
		printf("Error. No se pudo asignar memoria");
		return 1;
	}
	init_matrix(matriz, fil, col);
	imprimir_matriz(matriz, fil, col);
	printf("El resultado de la multiplicacion es: %d", compute_solution(matriz, fil, col, num));
	procesa_cadena(cadena1, cadena2, num, l);
	printf("\nLa cadena resultante es:\n%s", cadena2);

	free(matriz);
	return 0;
}

void init_matrix(int *m, int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			*(m + i * c + j) = rand() % 11 + 5;
		}
	}
}
void imprimir_matriz(int *m, int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			printf("%d ", *(m + i * c + j));
		}
		printf("\n");
	}
}
int compute_solution(int *m, int f, int c, int n){
	int producto = 1;
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			if(i % n == 0){
				producto *= *(m + i * c + j);
			}
		}
	}
	int resultado = producto;
	return(resultado);
}
void procesa_cadena(char c1[], char c2[], int n, char letra){
	int suma = 0;
	strcpy(c2, c1);
	size_t len = strlen(c2);
	for(int i = 0; i < len && suma < n; i++){
		if(c2[i] == 'p'){
			suma++;
			c2[i] = letra;
		}
	}
}