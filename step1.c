#include <stdio.h>
#include <string.h>
#include <math.h>
void main
{
	const int m = 5;
    const char c[] = "asfdsaff";
	int C[m][26] = { 0 };
	int T[m] = { 0 };
	int P[m] = { 0 };
	int i, j, k, n;
	n = strlen(c);
	for (i = 0;i <= n;i++)
	{
		k = c[i] - 97;
		C[i%m][k]++;
		T[i%m]++;
	}
	for (j = 0;j <= m - 1;j++)
		for (k = 0;k <= 25, k++)
			P[j] = P[j] + (C[j][k] / T[j])*(C[j][k] / T[j]);
	printf(P[] / n);
	return
}