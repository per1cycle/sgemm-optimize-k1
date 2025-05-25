#include <iostream>
#include "common.hh"
#include "kernels/v1.hh"

int main()
{
	constexpr uint M = 512, N = 512, K = 512;
	
	float *a = new float[M * K];
	float *b = new float[K * N];
	float *c = new float[M * N];
	
	utils::generate_T_matrix(a, M, K);
	utils::generate_T_matrix(b, K, N);
	Timer t;
	int loop_time = 10;
	t.start();
	
	for(int i = 0; i < loop_time; i ++)
		sgemm::v1(M, N, K, a, b, c, 1.0f, 0.0f);

	t.stop();
	t.report_sgemm_with_loop(M, N, K, 1.0f, 0.0f, loop_time);
	delete []a;
	delete []b;
	delete []c;

	return 0;
}
