#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDien;
    long tienDien;

    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);

    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0) {
        printf("Chi so moi phai lon hon chi so cu!");
        return 0;
    }

    if (soDien < 50)
        tienDien = soDien * 10000;
    else if (soDien < 100)
        tienDien = soDien * 15000;
    else if (soDien < 150)
        tienDien = soDien * 20000;
    else if (soDien < 200)
        tienDien = soDien * 25000;
    else
        tienDien = soDien * 30000;

    printf("\nSo dien tieu thu: %d kWh", soDien);
    printf("\nTien dien phai tra: %ld VND", tienDien);

    return 0;
}

