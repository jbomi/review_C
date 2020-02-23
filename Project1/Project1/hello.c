#include<stdio.h>

void main() {
	int x, y,result;

	printf("x값을 입력하여주세요 :");
	scanf("%d", &x);

	printf("y값을 입력하여주세요 :");
	scanf("%d", &y);

	result = x + y;
	printf("x+y=%d", result);
}