#include<stdio.h>
#pragma warning(disable : 4996)

void main() {
	char ch[20] = { NULL };
	int i;
	int count;
	for (i = 0;i < 20;i++) {
		scanf("%c", ch + i);
		count = i;
		if (*(ch + i) == '#')
			break;
	}
	for (i = count - 1;i >= 0;i--) {
		printf("%c", *(ch + i));
	}
}