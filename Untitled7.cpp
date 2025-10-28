#include <stdio.h>

int main() {
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("Nam %d la nam nhuan", nam);
    } else {
        printf("Nam %d khong phai la nam nhuan", nam);
    }

    return 0;
}



