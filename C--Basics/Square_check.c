//The user enters a number n and it should be checked whether this number is an exact square (n = 4 -> yes)

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Geben Sie ein Zahl : ");
    scanf_s("%d", &n);

    if (Losung(n)) {
        printf("Ja!", n);
    }
    else {
        printf("Nein!", n);
    }
   
}
int Losung(int number)
{
    int i;
    double a;

    a = sqrt((double)number);
    i = a;

    if (i == a) {
        return 1;
    }
    else {
        return 0;
    }
}
