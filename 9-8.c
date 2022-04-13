#include <stdio.h>
#pragma warning(disable: 4996)
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void main() {
	int ar[50] = { NULL };
	int a, b,*par,N;
	scanf("%d",&N);
	for (par = ar; par < ar + N;par++) {
		scanf("%d", par);
	}
	scanf("%d %d", &a, &b);
	swap(ar+a,ar+b);
	for (par = ar; par < ar + N;par++) {
		printf("%d ", *par);
	}
}