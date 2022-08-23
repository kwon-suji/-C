#include <stdio.h>
#pragma warning(disable: 4996)
int arrsum(int *str, int*end) {
	int sum = 0;
	for (str ; str <= end ; str++)
		sum += *str;
	return sum;
}

void main() {
	int N, S, E;
	scanf("%d%d%d", &N, &S, &E);

	int a[100] = { 0 },*pa=a;

	for (pa = a;pa < a + N;pa++)
		scanf("%d",pa);
	
	printf("%d",arrsum(a+S,a+E));
}