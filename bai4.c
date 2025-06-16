
int tinhTong(sum) {
    int sum =0;
    for (int i=0;i<=n;i++) {//Dong phuc tap khong gian la o(1)
        sum+=i;
    }
    return sum;
}
//Dung Cong thuc
int sumByRecipe(int n) {
    return n*(n+1)/2;//Do phuc tap khong gian la o(n)
}