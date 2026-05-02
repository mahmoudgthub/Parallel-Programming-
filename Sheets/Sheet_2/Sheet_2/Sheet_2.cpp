/*
Calculating the factorial of the number 5 using critical
*/

#include <iostream>      
#include <omp.h>         
using namespace std;

int main() {

    int fact = 1;        

#pragma omp parallel for num_threads(2)   
    for (int i = 1; i <= 5; i++) {            

#pragma omp critical                  
        {
            fact *= i;                        
        }
    }

    printf("Factorial = %d \n", fact);

    return 0;                                
}