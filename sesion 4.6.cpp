#include <stdio.h>

float tinhTienDien(int soKWh) {
    float tien = 0;
    if (soKWh <= 50) {
        tien = soKWh * 10.000;
    } else if (soKWh <= 100) {
        tien = 50 * 10.000 + (soKWh - 50) * 15.000;
    } else if (soKWh <= 150) {
        tien = 50 * 10.000 + 50 * 15.000 + (soKWh - 100) * 20.000;
    } else if (soKWh <= 200) {
        tien = 50 * 10.000 + 50 * 15.000 + 100 * 20.000 + (soKWh - 200) * 25.000;
    } else if (soKWh >= 200) {
        tien = 50 * 10.000 + 50 * 15.000 + 100 * 20.000 + 100 * 25.000 + (soKWh - 300) * 30.000;
    } 
    return tien;
}

int main() {
	
    float chiSoCu, chiSoMoi;

   
    printf("Nhap vao chi so cong to dien cu: \n");
    scanf("%f", &chiSoCu);
    printf("Nhap vao chi so cong to dien moi: \n");
    scanf("%f", &chiSoMoi);

    float soKWh = chiSoMoi - chiSoCu;

    if (soKWh < 0) {
        printf("Chi so cong to dien khong hop le.\n");
    } else {
       
        float tienDien = tinhTienDien(soKWh);
       
        printf("So Kwh tieu thu: %f kWh\n", soKWh);
        printf("so tien dien phai tra: %.2f VND\n", tienDien);
    }

    return 0;
}
