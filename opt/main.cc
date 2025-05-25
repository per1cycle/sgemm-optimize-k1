#include <iostream>
#include "common.hh"

int main()
{
	constexpr uint M = 1024, N = 1024, K = 1024;
	
	float *a = new float[M * K];
	float *b = new float[K * N];
	float *c = new float[M * N];
	
	utils::generate_T_matrix(a, M, K);
	utils::generate_T_matrix(a, M, K);


	delete []a;
	delete []b;
	delete []c;

	return 0;
}
