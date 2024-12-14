#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;      
}
int main() {
    int x = 10, y = 15;  
    printf("2 bien truoc khi doi: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("2 bien sau khi doi: x = %d, y = %d\n", x, y);
    return 0;
}

