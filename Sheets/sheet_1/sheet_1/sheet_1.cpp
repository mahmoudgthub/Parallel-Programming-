/*

Printing even numbers from 1 to 10 using ordered

*/

#include <iostream>      
#include <omp.h>         
using namespace std;

int main() {

#pragma omp parallel for ordered  

    for (int i = 1; i <= 10; i++) {   

        if (i % 2 == 0) {             

#pragma omp ordered      

            printf("% d \n",i);
        }
    }

    return 0;                        
}