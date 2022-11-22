//Create a program in C that contains only one main function main() and performs the processing described below:
//Reads from the keyboard the values for two real variables: base and ref;
//Reads real numbers entered from the keyboard until a value equal to the value of ref is encountered;
//Determines the number of entered values where the difference between the entered value and the value of base is less than ref(only positive numbers);
//Displays the calculated result on the screen.
//Note: Program this task as processing from a data stream.
#include<stdio.h>

int main(){
    int base, ref;
    int i, counter = 0;
    printf_s("Enter the value of base and ref:\n");

    printf_s("Base :\n");
    scanf_s("%d",&base);

    printf_s("Ref :\n");
    scanf_s("%d",&ref);

    do{
        scanf_s("%d",&i);
        if(((i - base)*(-1)) < ref){
            counter++;
        }
    }while(i != ref);

    printf_s("%d", counter);

    return 0;
}
