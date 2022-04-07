#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	char ch[10];
	char *pch,k;
	int count=0, max=0;
	for (pch = ch; pch < ch + 10;pch++) {
		scanf("%c",pch);
	}
	for (pch = ch; pch < ch + 10;pch++) {
		for (char* ppch = ch; ppch < ch + 10;ppch++) {
			if (*pch ==*ppch ) {
				count++;
			}
		}
		if (count > max) {
			max = count;
			k = *pch;
		}
		count = 0;
	}
		printf("%c %d",k,max);
}