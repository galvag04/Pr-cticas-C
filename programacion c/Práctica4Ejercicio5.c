#include <stdio.h>

int main() {
    int a, b;
    do {
        printf("Dime dos números: \n");
        scanf("%d %d", &a, &b);

        if (a >= b || a < 0 || b <= 0) {
            printf("Dime otros números, estos no valen, error\n");
        }

    } while (a >= b || a < 0 || b <= 0);

   for (int i = b - 1; i > a; i--) {
         if (i % 2 == 0) {
             printf("%d ", i);
         }
      }
    
 return 0; 
}