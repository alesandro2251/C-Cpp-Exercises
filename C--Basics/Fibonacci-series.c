//1, 1, 2, 3, 5, 8, 13, 21, 34, ..., n-2, n-1, (n-1 + n-2) - this is a Fibonacci series.
//The user enters a number n - print out the first n numbers of the Fibonacci series.

#include<stdio.h>


int main() {
	int n;
	scanf_s("%d", &n)

	 if(n > 0){
		 int a = 0;
		 int b = 1;
		 int c = a + b;
		 printf(" Fibonacci-Reihe: %d ", b);
		 
		 for (int i = 2; i <= n; ++i) {
			 printf("%d ", c);
			 a = b;
			 b = c;
			 c = a + b;
		 }
           return 0;
	 }
	 else {
		 return 0;
	 }
	
}
