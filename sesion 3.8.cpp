#include <stdio.h>

int main() {
    int num;
	int nghichDao = 0;

    printf("nhap mot so nguyen to co 4 chu so: ");
    scanf("%d", &num);

    if (num >= 1000 && num <= 9999) {
    	
        
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
            nghichDao = nghichDao * 10 + num % 10;
            num /= 10;
        

        printf("so nghich dao la: %d\n", nghichDao);
    } else {
        printf("so nhap vao khong phai so co 4 chu so.\n");
    }

    return 0;
}
