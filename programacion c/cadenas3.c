#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void invierte(char *cadenaOrigen, char *cadenaDestino);

int main(){
	char *cadena1 = (char*)malloc(100 * sizeof(char));
	char *cadena2 = (char*)malloc(100 * sizeof(char));

	if(cadena1 == NULL || cadena2 == NULL){
		printf("Error. No se pudo asignar memoria");
		return 1;
	}
	printf("Introduce la cadena: \n");
	fgets(cadena1, 100, stdin);

	size_t len = strlen(cadena1);

	if(len > 0 && cadena1[len - 1] == '\n'){
		cadena1[len - 1] = '\0';
	}

	printf("La cadena es: %s\n", cadena1);
	invierte(cadena1, cadena2);
	printf("La cadena invertida es: %s", cadena2);

	free(cadena1);
	free(cadena2);

	return 0;
}

void invierte(char *cadenaOrigen, char *cadenaDestino){
	size_t len = strlen(cadenaOrigen);
	int j = 0;
	for(int i = 0; i <= len - 1; i++ ){
		cadenaDestino[j] = cadenaOrigen[len - 1 - i];
		j++;
	}
	cadenaDestino[j] = '\0';
}