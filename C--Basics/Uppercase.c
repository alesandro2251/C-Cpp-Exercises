//Check whether a char entered by the user is uppercase or not ('A' -> yes; '0' -> no)

#include<stdio.h>

int main() {

	printf("Ein Buchstaben : ");
	
	char n;
	scanf_s("%c", &n);

	if ( n >= 'A' && n <= 'Z') {
		printf("Ja!");
	}
	else {
		printf("Nein!");
	}
	
	
	return 0;
}
