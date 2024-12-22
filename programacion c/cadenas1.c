#include <stdio.h>
#include <string.h>
int main(){
    char cadena[101];
    char comp[] = "compara";
    char concat[] = "anadida";

    printf("Introduce una cadena (maximo 100 caracteres): ");
    fgets(cadena, sizeof(cadena), stdin);

    size_t len = strlen(cadena);
    if(len > 0 && cadena[len - 1] == '\n'){
        cadena[len - 1] = '\0';
    }
    printf("La longitud de la cadena es: %zu\n", strlen(cadena));

    if(strcmp(cadena, comp) == 0){
        printf("La cadena es igual a \"compara\".\n");
    }
    else{
        printf("La cadena es distinta a \"compara\".\n");
    }
    if(strlen(cadena) + strlen(concat) < sizeof(cadena)){
        strcat(cadena, concat);
        printf("cadena tras concatenar: %s", cadena);
    }
    else{
        printf("La cadena no se pudo concatenar\n");
    }

    return 0;
}