#include <stdio.h>
void upArr(int *arr, int newValue, int index){
    arr[index] = newValue;
}
int main(){
    int arr[] = {3, 2, 1, 5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    upArr(arr, 20, 3);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
