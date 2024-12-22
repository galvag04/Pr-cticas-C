#include <stdio>
int main()
{
	int num, i, x;
	printf("Introduce un numero");
	do{
		scanf("%d", &num);
		if(num<=0){
			printf("ERROR");
		}
	} while(num<=0);
x = 0;
for(i = 0; i <= num; i++){
	x = x + i;
}
printf("El resultado de la suma es %d", x);
return 0;
}