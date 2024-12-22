#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void quita_espacios(char *cadena, char *cadenasin, int n);
int main()

{

	int num;

	printf("Introduce el numero de elementos de la cadena: ");
	scanf("%d", &num);
	getchar();

	char *cad = (char*)malloc((num + 1) * sizeof(char));
	char *cadsin = (char*)malloc((num + 1) * sizeof(char));

	if(cad == NULL || cadsin == NULL){

		printf("Error. No se pudo asignar memoria.\n");
	}	

	printf("introduce la cadena\n");
	fgets(cad, num + 1, stdin);
	quita_espacios(cad, cadsin, num);
	printf("La cadena sin espacios es: %s", cadsin);

	free(cad);
	free(cadsin);

	return 0;

}

void quita_espacios(char *cadena, char *cadenasin, int n){
	int j = 0;
	for(int i = 0; i <= n; i++){
		if(cadena[i] != ' '){
			cadenasin[j] = cadena[i];
			j++;
		}
	}
	cadenasin[j] = '\0';
}