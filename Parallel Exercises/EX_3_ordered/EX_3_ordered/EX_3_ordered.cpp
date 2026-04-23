/*

Create an array a[8], fills it with random integers between 1 and 25 
and prints the numbers in an ordered manner 
using OpenMP with proper synchronization.

*/

#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
	int a[8];
#pragma omp parallel
	{
#pragma omp for ordered
		for (int i = 0; i < 8; i++)
		{
			a[i] = rand() % 25 + 1;
			{
#pragma omp ordered
				printf("thread= %d, a[ %d ]= %d\n", omp_get_thread_num(), i, a[i]);
			}
		}
	}
}