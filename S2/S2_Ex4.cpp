#include <stdio.h>

int main() {
   float ChieuDai = 4;
   float ChieuRong = 5;
   float ChuVi = 2 * (ChieuDai + ChieuRong);
   float DienTich = ChieuDai * ChieuRong;
    printf("Chieu dai cua hinh chu nhat: %2f\n", ChieuDai);
	printf("Chieu rong cua hinh chu nhat: %.2f\n", ChieuRong); 
    printf("Chu vi cua hinh vuong: %.2f\n", ChuVi);
    printf("Dien tich cua hinh vuong: %.2f\n", DienTich); 
   
    
    return 0;
}
