#include <stdio.h>

int main(void) {
    int n;

    // Nh?p s? nguy�n
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    // Ki?m tra v� in k?t qu?
    if (n > 0) {
        printf("So vua nhap la so duong\n");
    } else if (n < 0) {
        printf("So vua nhap la so am\n");
    } else {
        printf("So vua nhap la so 0\n");
    }

    return 0;
}

