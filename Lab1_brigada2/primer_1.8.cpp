//#include <omp.h> 
//#include <iostream> 
//int  main() {
//    int i, m[10];
//    system("chcp 1251>nul");
//    printf("Массив в начале: \n");
//    for (i = 0; i < 10; i++) {
//        m[i] = 0;
//        printf("%d\n", m[i]);
//    }
//#pragma omp parallel num_threads(10) shared(m) 
//    {
//        m[omp_get_thread_num()] = 1;
//    }
//    printf("Массив в конце: \n");
//    for (i = 0; i < 10; i++) printf("%d\n", m[i]);
//    return 0;
//}