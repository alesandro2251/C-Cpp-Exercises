#include <stdio.h>
#include <time.h>
#include <stdlib.h>


struct item
{
    int key;
    void* data;
};

struct item_list{
    int key;
    void* data;
    struct item_list* next;
};


int main() {

    

    int n;
    //struct item* ptr;
    


   // printf("Enter arrs size: ");
//scanf("%d", &n);

    struct item array[100000];
    clock_t t;
    t = clock();

    for (int i = 0; i < n; i++)
    {
        array[i].key = 0;
    }
    
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Item array took  %f seconds to execute \n", time_taken);



    struct item* arr[100000];
    t = clock();

    for (int i = 0; i < n; i++)
    {
        arr[i]->key = 0;
    }
    
    t = clock() - t;
    double time_taken2 = ((double)t)/CLOCKS_PER_SEC;
    printf("Item* array took %f seconds to execute \n", time_taken2);


    struct item_list *head = malloc(sizeof(struct item_list));
    head->next = NULL;
    head->key = 0;
    struct item_list* ptr = head;

    t = clock();

    for (int i = 0; i < 100000; i++)
    {
        ptr->next = malloc(sizeof(struct item_list));
        ptr->next->key = 0;
        ptr = ptr->next;
        ptr->next = NULL;
    }
    
    double time_taken3 = ((double)t)/CLOCKS_PER_SEC;
    printf("Item list took   %f seconds to execute \n", time_taken3);




}
