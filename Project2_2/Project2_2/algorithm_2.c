#include<stdio.h>
void main() {
	int f = 0;
	int total = 0;
	printf("f���� �Է��Ͽ� �ֽʽÿ�");
	scanf("%d", &f);
	if (f % 2 == 0) {
		total = f * f / 2 + f / 2;
		printf("even total=%d", total);
	}
	else{
		total = f * (f + 1) / 2;
		printf("odd total=%d", total);
	}
		
}
