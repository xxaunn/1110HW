#include <stdio.h>
#include <stdlib.h>

int main() {
	int LCM = 1;
	int a, b;
	printf("enter two intergers:\n");
	scanf("%d %d", &a, &b);
	while (1) {
		if (LCM%a == 0 && LCM%b == 0) {
			printf("LCM is %d\n", LCM);
			break;
		}
		else {
			LCM++;
		}
	}
}