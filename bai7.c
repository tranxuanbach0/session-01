#include <stdio.h>

int trungLap( int arr[],int size) {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {//Do phuc tap khong gian la o(1)||Do phuc tap thoi gian la o(n2)
            if(arr[i]==arr[j]) {
                return 1;//True
            }
        }
    }
    return 0;//False
}
int trungLapCachHai(int arr[],int size) {
    int flag[1000]={0};
    for(int i=0;i<size;i++) {//Do phuc tap thoi gian la o(n)||Do phuc tap khong gian la o(1)
        if(flag[arr[i]]==1) {
            return 1;
        }
        flag[arr[i]]=1;
    }
    return 0;
}