#include <stdio.h>


struct item{
    int key;
    int *next;
};

int func1() {
    int count = 0;
    struct item *p;
    struct item *head;
    for(p = head;p=! NULL; p= p->next){
        if(p->key > 100){
            count++;
        }
    }
    return count;
}
int main(){
    return 0;
}
