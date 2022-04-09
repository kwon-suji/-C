#include <stdio.h>
#pragma warning(disable: 4996)
void input(int* pa,int *pb,int *pc) {
	scanf("%d%d%d",pa,pb,pc);
}
void output(int* pa, int *pb, int *pc) {
	printf("%d %d %d", *pa, *pb, *pc);
}

void main() {
	int x, y, z;
	input(&x,&y,&z);
	output(&x, &y, &z);
	
}