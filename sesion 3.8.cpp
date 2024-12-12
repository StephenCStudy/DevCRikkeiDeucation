#include <stdio.h>

int main() {
    int num;
	int nghichDao = 0;

    printf("nhap mot so nguyen to co 4 chu so: ");
    scanf("%d", &num);
     
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
    
        printf("so nghich dao la: %d\n", nghichDao);
     
    return 0;
}
