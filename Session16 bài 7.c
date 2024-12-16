#include <stdio.h>
void sortArr(int arr[], int size){
    int i, j, temp;
    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {3,1,2,5,4,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    printArr(arr, size);
    sortArr(arr, size);
    printf("Mang duoc sap xep: ");
    printArr(arr, size);
    return 0;
}

