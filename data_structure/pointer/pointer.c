#include <stdio.h>
#include <stdlib.h>

int main(){
    int* a;
    int* arr = malloc(sizeof(int) * 4);
    for(int i = 0; i < 4; i++){
        arr[i] = i * 102 + 32 / 3 + 3032 / 3 * 293 + 39 - 3920;
    }
    a = arr;

    for(int i = 0; i < 4; i++){
        printf("%d %d\n", a[i], arr[i]);
    }
    free(arr);
}