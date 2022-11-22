//The user enters some whole numbers, stopping at -999. Find the mean of all digits before -999.

#include<stdio.h>

int main() {

	printf("Geben Sie Die Zahlen :");
	
	int n;
	scanf_s("%d", &n);
	int summe = 0;
	int Summe;
	int i,j;
	
	for (j = 0; j < n; j++ ) {
		scanf_s("%d", &i);
		if( i > 0){
			summe += i;
			Summe = summe + -999;
		}
		else {

			summe += i * (- 1);
			Summe = summe + -999;
		}
		

	}

	printf("Die Summe ist : %d", Summe);
	return 0;
}
