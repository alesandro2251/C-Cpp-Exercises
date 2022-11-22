//Convert a user-supplied integer n to binary form (5 -> 101)

#include<stdio.h>

int main() {
	
    printf("Geben Sie der Zahl : ");
	int n;	
	int array[10];
	int j;
	int k;
	scanf_s("%d", &n);
	
	for (j= 0; n > 0; j++) {
		array[j] = n % 2;
		n = n / 2;
	}
    
	for (j = j - 1; j >= 0; j--){
		
		printf("%d", array[j]);
	}

	return 0;
}
