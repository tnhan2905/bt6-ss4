#include <stdio.h>

int main() {
    float so_dien_cu, so_dien_moi, so_dien_tieu_thu, tien_dien = 0.0;
    printf("Nhap so dien cu: ");
    scanf("%f", &so_dien_cu);
    printf("Nhap so dien moi: ");
    scanf("%f", &so_dien_moi);
    
    if (so_dien_moi < so_dien_cu) {
        printf("So dien moi khong hop le.\n");
        return 1;
    }
    so_dien_tieu_thu = so_dien_moi - so_dien_cu;

    if (so_dien_tieu_thu <= 50) {
        tien_dien = so_dien_tieu_thu * 15000;
    } else if (so_dien_tieu_thu <= 100) {
        tien_dien = 50 * 15000 + (so_dien_tieu_thu - 50) * 20000;
    } else if (so_dien_tieu_thu <= 200) {
        tien_dien = 50 * 15000 + 50 * 20000 + (so_dien_tieu_thu - 100) * 25000;
    } else {
        tien_dien = 50 * 15000 + 50 * 20000 + 100 * 25000 + (so_dien_tieu_thu - 200) * 30000;
    }

    printf("So dien tieu thu: %.2f kWh\n", so_dien_tieu_thu);
    printf("Tien dien phai tra: %.2f VND\n", tien_dien);

    return 0;
}
