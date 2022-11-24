#include <stdio.h>
#include <stdlib.h>

struct item
{
    int key;
    void *data;
};


int binarySearch(struct item *arr, int x, int low, int high) {

    int iterations_count = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        printf("Step: %d  Left: %d  Mid: %d  Right: %d\n",iterations_count, low, mid, high);

        if (arr[mid].key == x)
            return mid;

        if (arr[mid].key < x){

            low = mid + 1;

        }

        else
            high = mid - 1;


        iterations_count++;
    }

    return -1;
}
int main(){

    int size;
    struct item* array;
    int searched_key;


    printf("Enter the size of the array: ");
    scanf("%d", &size);

    array = (struct item*)malloc(sizeof(struct item)*size);

    for (int i = 0; i < size; i++)
    {

        array[i].key = i+1;
    }


    for (int i = 0; i < size; i++)
    {
        if(i == size - 1){
            printf("%d", array[i].key);
            break;
        }
        printf("%d, ", array[i].key);
    }


    printf("\nEnter a number from the list to see it's index: ");
    scanf("%d", &searched_key);

    int key_found = binarySearch(array, searched_key, 0, size-1);

    printf("Index of the searched key: %d", key_found);

    free(array);
    return 0;


}
