//The user enters an integer (e.g. 123). Output the sum of all digits (6).

#include <stdio.h>

int main() {

	int n;
	int r;
	int sum = 0;

	printf("Geben Sie den Zahl :");
	scanf_s("%d", &n);
	if (n > 0) {
		for (n; n != 0; (n = n / 10)) {
			r = n % 10;
			sum = sum + r;
		}

		printf("Die Summe ist %d", sum);

		return 0;
	}
	else {
		for (n; n != 0; (n = n / 10)) {
			r = n % 10;
			sum = sum + r;
		}

		printf("Die Summe ist %d", sum * -1);

		return 0;
	}
	
}
