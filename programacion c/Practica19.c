#include <stdio.h>
void leeredades(int p[10]);
float calcularmedia(int e[10]);
int main(){
	int edades[10];
	float media;
	leeredades(edades);
	media = calcularmedia(edades);
	printf("La media es: %f", media);
	return 0;
}
float calcularmedia(int e[10]){
	int i;
	int final=0;
	for(i=0; i<10; i++){
		final = final + e[i];
		}
	final = final/10;
	return final;
}
void leeredades(int p[10]){
	 int i;
	 for(i=0; i<10; i++){
	 	scanf("%d", &p[i]);
	 }
}