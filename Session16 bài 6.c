#include <stdio.h>
int findElemnet(int *arr, int giaTri) {
    int i = 0;
    while (arr[i] != 0) {
        if (arr[i] == giaTri) {
            return i;
        }
        i++;
    }
    return -1;
}
int main() {
    int arr[] = {1,2,4,5,6,7,7};
    int giaTriCanTim = 7;
    int place = findElemnet(arr, giaTriCanTim);
    if (place != -1) {
        printf("phan tu %d duoc tim thay o vi tri %d", giaTriCanTim,place);
    } else {
        printf("phan tu %d khong duoc tim thay", giaTriCanTim);
    }
    return 0;
}
