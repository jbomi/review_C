#include<stdio.h>

void main() {
	int t = 0;
	int k = 0;
	for (k = 0; k < 11; k++) {
		t = t + k;
		printf("t+k(%d)=%d\n",k,t);
	}
	printf("Total t=%d\n", t);
}
