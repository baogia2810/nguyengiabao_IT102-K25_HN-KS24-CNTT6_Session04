#include <stdio.h>

int main() {
    int S;
    printf("Nhap so dien (kWh): ");
    scanf("%d", &S);
    if (S <= 50) {
        printf("Gia dien: 10000 VND/kWh\n");
    } else if (S <= 100) {
        printf("Gia dien: 15000 VND/kWh\n");
    } else if (S <= 150) {
        printf("Gia dien: 20000 VND/kWh\n");
    } else if (S <= 200) {
        printf("Gia dien: 25000 VND/kWh\n");
    } else {
        printf("Gia dien: 30000 VND/kWh\n");
    }
    return 0;
}