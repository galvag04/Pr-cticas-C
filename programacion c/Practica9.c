#include <stdio.h>
int main()
{
	int num, i, x;
	printf("Escriba un numero:\n");
	do{
		scanf("%d", &num);
		if(num<=0){
			printf("ERROR");
		}
	}while(num<=0);
i = 0;
x = 0;
	do{
		if(i<=num){
			i++;
			x = x + i;
		}
	}while(i<=num);
printf("El resultado es:%d\n", x);
return 0;
}