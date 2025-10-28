#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int hopLe = 1; // Gi? s? h?p l? tru?c

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Ki?m tra tháng h?p l?
    if (thang < 1 || thang > 12) {
        hopLe = 0;
    } else {
        int soNgayTrongThang;

        // Xác d?nh nam nhu?n
        int namNhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);

        // Xác d?nh s? ngày t?i da trong tháng
        switch (thang) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                soNgayTrongThang = 31;
                break;
            case 4: case 6: case 9: case 11:
                soNgayTrongThang = 30;
                break;
            case 2:
                soNgayTrongThang = namNhuan ? 29 : 28;
                break;
            default:
                soNgayTrongThang = 0;
        }

        // Ki?m tra ngày h?p l?
        if (ngay < 1 || ngay > soNgayTrongThang) {
            hopLe = 0;
        }
    }

    // In k?t qu?
    if (hopLe)
        printf("Ngay thang nam hop le");
    else
        printf("Ngay thang nam khong hop le");

    return 0;
}

