#ifndef K1_SGEMM_V1_HH
#define K1_SGEMM_V1_HH

namespace sgemm
{
void v1(const uint M, const uint N, const uint K,
		float *a, float *b, float *c, float alpha, float beta)
{
	for(int i = 0; i < M; i ++)
	{
		for(int j = 0; j < N; j ++)
		{
			for(int k = 0; k < K; k ++)
			{
				c[i * N + j] += alpha * a[i * K + k] * b[k * N + j];
			}
			
		}
	}
	
}
}

#endif

