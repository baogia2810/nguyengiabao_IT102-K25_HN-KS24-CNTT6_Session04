#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("So %d la so duong\n", number);
    } else if (number < 0) {
        printf("So %d la so am\n", number);
    } else {
        printf("So %d la so khong am khong duong\n", number);
    }

    return 0;
}