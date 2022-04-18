#include <stdio.h>
#pragma warning(disable:4996)
void gcdlcm(int a, int b, int *gcd, int *lcm) {
	for (int i = 1;i <= (a < b ? a : b);i++) {
		if (a%i == 0 && b%i == 0)
			*gcd = i;
	}
	*lcm = (a*b) / *gcd;
}

void main() {
	int a, b, gcd, lcm;
	scanf("%d%d", &a, &b);
	gcdlcm(a, b, &gcd, &lcm);
	printf("%d %d", gcd, lcm);
}