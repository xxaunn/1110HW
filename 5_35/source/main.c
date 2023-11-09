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
	printf("第 n 個 Fibonacci,n=");
	scanf("%u", &n);
	unsigned long long int result = fibonacci(n);
	
	printf("第 %u 個 Fibonacci 數字是：%llu\n", n, result);

	return 0;
}
