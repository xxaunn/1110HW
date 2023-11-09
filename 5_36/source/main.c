#include <stdio.h>
#include <stdlib.h>

void towersOfHanoi(int n, char source, char destination, char auxiliary) {
	if (n == 1) {
		printf("Move disk 1 from peg %c to peg %c\n", source, destination);
		return;
	}

	towersOfHanoi(n - 1, source, auxiliary, destination);
	printf("Move disk %d from peg %c to peg %c\n", n, source, destination);
	towersOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
	int numDisks = 64; // The number of disks in the initial stack

	// Function call to solve Towers of Hanoi
	towersOfHanoi(numDisks, 'A', 'C', 'B');

	return 0;
}