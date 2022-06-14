#include <stdio.h>
#pragma warning(disable: 4996)
/*void addArray(int *a,int *b, int *c,int n) {
	int cnt = 0;
	for (a,b=b+n-1,c; cnt <n  ; a++,b--,c++,cnt++) {

		*c = *a + *b;
	}
}*/
void addArray(int *a, int *b, int *c, int n) {

	int *end = a + n;

	for (a, b = b + n - 1, c; a < end; a++, b--, c++)

		*c = *a + *b;

}
void main() {
	int a[20] = { 0 }, b[20] = { 0 }, c[20] = { 0 };
	int n, *pa = a, *pb = b, *pc = c;

	scanf("%d",&n);

	for (pa = a; pa < a + n; pa++)
		scanf("%d", pa);

	for (pb = b; pb < b + n; pb++)
		scanf("%d", pb);


	addArray(a,b,c,n);

	for (pc = c; pc < c + n; pc++)
		printf(" %d", *pc);

}

