#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
	int x[3];
	int *p;
	for (p = x; p < x + 3; p++) {
		scanf("%d",p);
	}
	for (int i = 0;i < 2;i++) {
		for (p = x;p < x + 2;p++) {
			if (*p > *(p + 1)) {
				int tmp = *(p + 1);
				*(p + 1) = *p;
				*p = tmp;
			}
		}
	}
	p = x;
	printf("%d", *(p+1));
}