#include <stdio.h>

int func1(int a[], int n) {
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i] % 3 == 0){
            count++;
        }
    }
    return count;
}
int main(){
    int a[100];
    int n = 10;

    func1(a,n);
    return 0;
}
