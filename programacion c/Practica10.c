#include <stdio.h>
int main()
{
 int num, i, x;
 printf("Introduce un numero: \n");
 scanf("%d", &num);
 while(num<=1){
 	printf("ERROR");
 }
 i = 1;
 x = 1;
 	while(i<=num){
 	x = x * i;
 	i++;
 }
 printf("El resultado es: %d", x);
 return 0;
}