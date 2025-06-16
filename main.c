#include <stdio.h>

/**
 * @description ham dem so lan xuat hien cua 1 phan tu
 * @param array mang can lap qua
 * @param arraylength do dai cua mang
 * @param elementcheck phan tu can kiem tra
 * @return so lan xuat hien cua phan tu: 0 - neu ko xuat hien , n lan - neu xuat hien
 */
int countexist(int array[],1int arraylength,int elementcheck) {
int count=0;
  for(int i=0;i<arraylength;i++) {
    if(array[i]==elementcheck) {
      count++;
    }
  }
  return count;
}
//arrray[1] => 0(1)

int main(){
  //khai bao cac bien can thiet
  int elements;
  int elementcheck;
  //hien yeu cau nhap
  printf("nhap so luong phan tu cua mang: ");
  scanf("%d", &elements);
  //khai bao mang
  int array[elements];
  //nhap mang
  for (int i=0; i<elements; i++) {
    printf("nhap phan tu thu %d",i);
    scanf("%d", &array[i]);
  }
  //in mang
  for (int i=0; i<elements; i++) {
    printf("%d ",array[i]);
  }
  printf("nhap phan tu can kiem tra");
  scanf("%d", &elementcheck);
  //goi ham de dem so lan xuat hien
  int result = countexist(array,elements,elementcheck);
  printf("so lan xuat hien cua phan tu %d la %d",elementcheck,result);
return 0;

}