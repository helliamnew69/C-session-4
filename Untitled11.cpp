#include <stdio.h>

int main() {
    int namSinh, tuoi;
    float diemTB;
    const int namHienTai = 2025; // có th? c?p nh?t theo nam th?c t?

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Ki?m tra nam sinh h?p l?
    if (namSinh <= 1900 || namSinh > namHienTai) {
        printf("Nam sinh khong hop le");
        return 0;
    }

    // Tính tu?i
    tuoi = namHienTai - namSinh;

    // X?p lo?i h?c l?c
    char hocLuc[20];
    if (diemTB < 5.0)
        sprintf(hocLuc, "Yeu");
    else if (diemTB < 6.5)
        sprintf(hocLuc, "Trung binh");
    else if (diemTB < 8.0)
        sprintf(hocLuc, "Kha");
    else
        sprintf(hocLuc, "Gioi");

    // In k?t qu?
    printf("\nThong tin sinh vien:\n");
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Hoc luc: %s\n", hocLuc);

    // Ki?m tra d? 18 tu?i
    if (tuoi >= 18)
        printf("Sinh vien du 18 tuoi\n");
    else
        printf("Sinh vien chua du 18 tuoi\n");

    return 0;
}

