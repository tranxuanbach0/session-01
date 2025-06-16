#include <stdio.h>

int SoLanXuatHien(int arr[],int size,int x) {
    int count=0;
    for(int i=0;i<size;i++) {//Do phuc tap khong gian la o(1)||Do phuc tap thoi gian la o(n)
        if(arr[i]==x) {
            count++;
        }
    }
    return count;
}