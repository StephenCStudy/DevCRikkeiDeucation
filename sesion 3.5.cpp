#include <stdio.h>
 
int main() {
    const char* sinhVien[] = {
        "Nguyen Van A",
        "Nguyen Van B",
        "Nguyen Van C",
        "Nguyen Van D",
        "Nguyen Van E",
        "Nguyen Van F",
        "Nguyen Van G",
        "Nguyen Van H",
        "Nguyen Van I",
        "Nguyen Van K",
    };
 
    const int tuoi[] = {
        20,
        21,
        18,
        19,
        22,
        21,
        23,
        19,
        18,
        18,
    }; 
    int stt = sizeof(sinhVien) / sizeof(sinhVien[0]);
 
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < stt; i++) {
        printf("%d. %s | tuoi: %d\n" , i + 1, sinhVien[i], tuoi[i]); 
    }
 
    return 0;
}