#include <stdio.h>
#include <math.h>

int main() {
    double firstmoney, interest_rate, moneyback, tien_lai;
    int month;

    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &firstmoney);
    printf("Nhap lai xuat thang: ");
    scanf("%lf", &interest_rate);
    interest_rate /= 100; 
    printf("Nhap so thang gui: ");
    scanf("%d", &month);

   
    moneyback = firstmoney * pow(1 + interest_rate, month);
    tien_lai = moneyback - firstmoney;

    
    printf("Tien lai: %.3f\n", tien_lai);
    printf("Tien nhan duoc: %.3f\n", moneyback);

    return 0;
}
