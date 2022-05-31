#include <stdio.h>
#pragma warning(disable : 4996)

void strcopy(char a[], char b[]) {
	char *pa, *pb;
	for (pa=a, pb=b; pa < a + 6; pa++, pb++)
		*pb = *pa;
}

void main() {
	char a[6], b[6];
	char *pa = a, *pb = b;
	for (pa = a;pa < a + 6;pa++) 
		scanf("%c", pa);

	strcopy(a,b);
	
	for (pb = b;pb < b + 6;pb++)
		printf("%c", *pb);
}