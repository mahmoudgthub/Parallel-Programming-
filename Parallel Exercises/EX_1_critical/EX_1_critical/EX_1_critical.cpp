/*
Create an array a[50],
fill the array with random integers between 1 and 50,
and then find the sum of all odd numbers in the array.
Ensure that the program properly implements synchronization.
*/

#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
	int a[50], sum = 0;

#pragma omp parallel
	{
#pragma omp for
		for (int i = 0; i <= 50; i++)
			a[i] = rand() % 50 + 1;

#pragma omp for
		for (int i = 0; i <= 50; i++)
		{
			if (a[i] % 2 != 0)
			{
#pragma omp critical
				sum += a[i];
			}
		}
	}

	printf("sum= %d\n", sum);
}
