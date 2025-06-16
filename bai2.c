#include <stdio.h>

void printDouble(int n) {
    int i=1;
    while (i<n) {
        printf("%d\n",i);
        i*=2;
    }
}
int main() {
    printDouble(20);
    return 0;
}
//Do phuc tap thoi gian la o(n)