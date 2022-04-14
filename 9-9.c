#include <stdio.h>
#pragma warning(disable: 4996)
int mid(int ar[3]) {
	int *median=ar;
	
	if (*ar >= *(ar + 1)) {
		if (*(ar + 1) >= *(ar + 2))
			return *(ar + 1);
		else if (*ar <= *(ar + 1))
			return *ar;
		else
			return *(ar + 1);
	}
	else if (*ar > *(ar + 2))
		return *ar;
	else if (*(ar + 1) > *(ar + 2))
		return *(ar + 2);
	else
		return *(ar + 1);
}
void main() {
	int ar[3];
	int *par = ar;
	for (par=ar;par <ar+ 3;par++) {
		scanf("%d",par);
	}
	printf("%d", mid(ar));
}