//User enters n numbers, find largest of these (n entered by user)

#include<stdio.h>

int main() {

	int n;
	int z = 0;
	int a = 9;

	printf("Geben Sie ein Zahl :");
	scanf_s("%d", &n );

	for (n > 0; a = n % 10;) {
		if (z < a) {
			z = a;
		}
		n = n / 10;
		}
	
	printf("Der grosste Zahl ist : %d", z);
	
	
	
	return 0;

}
