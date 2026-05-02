/*
#include <iostream>
#include <omp.h>

int main() {

#pragma omp parallel for schedule (static,4) ordered

	for (int i = 0; i < 12; i++)
	{
#pragma omp ordered
		printf("i = %d Threads = %d \n", i, omp_get_thread_num());
	}

}
*/


#include <iostream>
#include <omp.h>

int main() {

#pragma omp parallel for schedule (dynamic,4) 

	for (int i = 0; i < 12; i++)
	{
		printf("i = %d Threads = %d \n", i, omp_get_thread_num());
	}

}



