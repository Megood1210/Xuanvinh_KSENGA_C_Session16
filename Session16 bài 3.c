#include <stdio.h>
void sum(int *a, int *b, int *result) {
    *result = *a + *b;  
}
int main() {
    int x = 4, y = 6; 
    int result;    
    sum(&x, &y, &result);
    printf("Tong cua %d và %d: %d\n", x, y, result);
    return 0;
}

