#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;

    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    int thuong = a / b;


    printf("Tong cua %d v� %d l�: %d\n", a, b, tong);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, hieu);
    printf("Tich cua %d v� %d l�: %d\n", a, b, tich);
    printf("Thuong cua %d v� %d l�: %.2f\n", a, b, thuong);
    return 0;
}
