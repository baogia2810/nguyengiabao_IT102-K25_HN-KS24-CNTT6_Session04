#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);
    if (c >= a && c <= b) {
        printf("%d nam trong khoang [%d, %d]\n", c, a, b);
    } else {
        printf("%d khong nam trong khoang [%d, %d]\n", c, a, b);
    }
    return 0;
}