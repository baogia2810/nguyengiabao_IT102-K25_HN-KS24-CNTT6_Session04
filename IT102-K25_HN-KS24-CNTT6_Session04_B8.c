#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap 3 canh tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0) {
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong phai 3 canh tam giac\n");
    }
    return 0;
}