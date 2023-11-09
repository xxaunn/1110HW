#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned n) {
	unsigned long long int a = 0, b = 1, temp;

	if (n == 1) {
		return a;
	}

	for (unsigned i = 2; i < n; ++i) {
		temp = a + b;
		a = b;
		b = temp;
	}

	return b;
}

int main() {
	unsigned n;
	printf("�� n �� Fibonacci,n=");
	scanf("%u", &n);
	unsigned long long int result = fibonacci(n);
	
	printf("�� %u �� Fibonacci �Ʀr�O�G%llu\n", n, result);

	return 0;
}
