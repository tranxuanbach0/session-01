#include <stdio.h>
#include <stdlib.h>

int*mallocArray(int n) {
    int* arr=(int*)malloc(sizeof(int)*n);//Do phuc tap khong gian o(n)
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}


