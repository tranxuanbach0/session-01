#include <stdio.h>

int xuatHienNhieuNhat(int arr[], int size) {
    int maxCount=0;
    int value=arr[0];
    for(int i=0;i<size;i++) {
        int count=0;
        for(int j=0;j<size;j++) { //Do phuc tap thoi gian la o(n2)||Do phuc tap khong gian la o(1)
            if(arr[i]==arr[j]) {
                count++;
            }
        }
        if(count>maxCount) {
            maxCount=count;
            value=arr[i];
        }
    }
    return value;
}