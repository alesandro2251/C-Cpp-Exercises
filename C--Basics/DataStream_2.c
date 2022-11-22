//Create a program in C that contains only one main function main() and performs the processing described below:
//·Processes k real numbers entered from the keyboard (the value of k is also entered);
//For a range [p, q] entered from the keyboard, calculates:
//o the number of numbers greater than the lower limit p;
//o the sum of the numbers in range [p,q];
//·Displays the three calculated results on the screen.
//Note: Program this task as processing from a data stream.

#include<stdio.h>
int main(){
    int k,p,q;
    int counter = 0, sum = 0;

    printf_s("Enter the values for range [p,q]\n");

    printf_s("p :\n");
    scanf_s("%d",&p);

    printf_s("q :\n");
    scanf_s("%d",&q);
    if(p > q){
        printf_s("Sorry, Error!. P cannot be bigger than Q! RESTART!");
    }else {
        do {
            scanf_s("%d", &k);
            if (k > p) {
                counter++;
            }
            sum += k;
        } while (k > p && k < q);

        printf_s("Numbers greater than p are : %d\n", counter);
        printf_s("Sum of numbers in range [p,q] is : %d\n", sum);
    }
    return 0;
}
