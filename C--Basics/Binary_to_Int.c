//Convert a user-specified binary number to decimal form (101 -> 5)

#include <stdio.h>
#include <math.h>


int main() {

	printf("Geben Sie ein Binarzahl : ");

	int n;
	scanf_s("%d", &n);
	int output = 0;
	int j;

	for (int i = 0; n != 0; i++) {
		j = n % 10;
		n = n / 10;
		output = output + (pow(2,i) * j);
	}
	printf(" Antwort : %d", output);

	return 0;

}
