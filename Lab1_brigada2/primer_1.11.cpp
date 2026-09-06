#include <omp.h> 
#include <iostream> 
int  main() {
    system("chcp 1251>nul");
    omp_set_num_threads(5);
#pragma omp parallel num_threads(3) 
    {
        printf("Параллельная область 1\n");
    }
#pragma omp parallel 
    {
        printf("Параллельная область 2\n");
    }
    return 0;
}