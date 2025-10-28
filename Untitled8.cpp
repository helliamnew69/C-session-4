#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Nhap canh a: ");
    scanf("%d", &a);

    printf("Nhap canh b: ");
    scanf("%d", &b);

    printf("Nhap canh c: ");
    scanf("%d", &c);

    // Ki?m tra n?u c? ba c?nh d?u duong và th?a mãn di?u ki?n tam giác
    if (a > 0 && b > 0 && c > 0 &&
        a + b > c &&
        a + c > b &&
        b + c > a) {
        printf("La 3 canh tam giac");
    } else {
        printf("Khong phai 3 canh tam giac");
    }

    return 0;
}

