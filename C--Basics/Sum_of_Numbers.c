//Find the sum of all natural numbers <= n and output whether the sum is even or not (n entered by the user)

#include<stdio.h>

int main() {

	int n;
	printf("Geben Sie ein Zahl : ");
	scanf_s("%d", &n);
	int i, b = 0;

	for (i = 0; i <= n; i++) {
		b += i;

	}
	if (b % 2 == 0) {
		printf("Gerade ! -- %d", b);
	}
	else {
		printf("Nicht !-- %d", b);
	}
	return 0;
}
