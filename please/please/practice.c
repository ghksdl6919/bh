#include <stdio.h>
#include <string.h>

int main(void) {
	int a, b;
	int sum, sub, mul, inv;
	
	a = 10;
	b = 20;
	sum = a + b;
	sub = b - a;
	mul = a * b;
	inv = -a;

	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� �������� : %d", inv);

	return 0;

}