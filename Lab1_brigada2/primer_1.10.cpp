//#include <omp.h> 
//#include <iostream> 
//int n;
//#pragma omp threadprivate(n) 
//int  main() {
//	int num;
//	n = 1;
//#pragma omp parallel private (num) 
//	{
//		system("chcp 1251>nul");
//		num = omp_get_thread_num();
//		printf("Значение n на нити %d (на входе): %d\n", num, n);
//		n = omp_get_thread_num();
//		printf("Значение n на нити %d (на выходе): %d\n", num, n);
//	}
//	printf("Значение n (середина): %d\n", n);
//#pragma omp parallel private (num) 
//	{
//		num = omp_get_thread_num();
//		printf("Значение n на нити %d (ещё раз) : %d\n", num, n);
//	}
//	return 0;
//}