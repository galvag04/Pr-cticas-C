#include <stdio.h>
#include <omp.h>

int main(){
	int nthreads, tid;
	printf("Trabajamos con 4 threads\n")
	omp_set_num_threads(4);
	nthreads = omp_set_num_threads();
	printf("Numero de threads en ejecucion = %d\n", nthreads);
	#pragma omp_set_num_threads(tid);

	printf("Hola desde el thread = %d\n", tid);
}