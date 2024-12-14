#include <stdio.h>
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i)); 
    }
}
int main() {
    int arr[] = {3, 4, 2, 5, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]);  
    printArray(arr, size);
    return 0;
}

