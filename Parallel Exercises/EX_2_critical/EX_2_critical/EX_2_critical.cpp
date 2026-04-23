/*
 
Given the array a[10] = { 1, 3, 2, 4, 5, 4, 6, 8, 7, 9 }, 
write a program that uses OpenMP to find the sum of all odd numbers in the array. 
Ensure that the program properly implements synchronization

*/

#include <iostream>
#include <omp.h>
using namespace std;
int main()
{
	int a[10] = { 1, 3, 2, 4, 5, 4, 6, 8, 7, 9 }, sum = 0;
#pragma omp parallel
	{
#pragma omp for
		for (int i = 0; i < 10; i++)
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
