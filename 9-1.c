#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int x, *px = &x;
	int y, *py = &y;
	int z, *pz = &z;
	scanf("%d%d%d",px,py,pz);
	int *tmp = py;
	py = pz;
	pz = px;
	px = tmp;


	printf("%d %d %d",*px,*py,*pz);


}
