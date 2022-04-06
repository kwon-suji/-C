#include <stdio.h>
#pragma warning(disable : 4996)
int main() {
	int arr[5] = { 0 }, rank[5] = { 1,1,1,1,1 }, i, j;
	int *parr, *prank;
	for (parr = arr;parr < arr + 5;parr++) {
		scanf("%d", parr);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)  
			if (arr[i] < arr[j]) rank[i]++;
	}
	for (parr = arr,prank = rank;prank < rank + 5;parr++,prank++) {
		printf("%d=r%d ", *parr,*prank);
	}
}