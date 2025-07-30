#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap ngay: "); scanf("%d", &day);
    printf("Nhap thang: "); scanf("%d", &month);
    printf("Nhap nam: "); scanf("%d", &year);

    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Ngay thang nam khong hop le\n");
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) printf("Ngay thang nam khong hop le\n");
            else printf("Ngay thang nam hop le\n");
        } else {
            if (day > 28) printf("Ngay thang nam khong hop le\n");
            else printf("Ngay thang nam hop le\n");
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) printf("Ngay thang nam khong hop le\n");
        else printf("Ngay thang nam hop le\n");
    } else {
        if (day > 31) printf("Ngay thang nam khong hop le\n");
        else printf("Ngay thang nam hop le\n");
    }
    return 0;
}