#include <stdio.h>

int sapXep(int arr[],int size) {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {//Do phuc tap thoi gian la o(n2)||Do phuc tap khong gian la o(1)
            if(arr[i]>arr[j]) {
                int temp=arr[i];
                temp=arr[j];
                arr[i]=arr[j];
            }
        }
    }
}