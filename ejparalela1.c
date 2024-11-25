#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>
#define NUM_THREADS 8
int main(){

	omp_set_num_threads(NUM_THREADS);

	#pragma omp parallel

	{

		int tid = omp_get_thread_num();

		srand(time(NULL) + tid);

		int random_num = rand() % 100 + 1;

		printf("Hilo %d: Numero aleatorio = %d\n", tid, random_num);
	
	}

return 0;
}