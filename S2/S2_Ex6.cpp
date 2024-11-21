#include <stdio.h>
int main() {
   const float PI = 3.14;
   float BanKinh = 3;
   float ChuVi = 2 * PI * banKinh;
   float DienTich = PI * banKinh * banKinh;
   
	printf("banKinh cua hinh tron: %.2f", BanKinh); 
    printf("Chu vi cua hinh tron: %.2f", ChuVi);
    printf("Dien ttch cua hinh tron: %.2f", DienTich); 
    return 0;
}
