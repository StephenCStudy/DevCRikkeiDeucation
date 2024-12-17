#include <stdio.h>

int main() {
    int day, month;

    printf("Nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Nhap thang sinh: ");
    scanf("%d", &month);

    if (month == 1) {
        if (day <= 19)
            printf("Ban la cung ma ket\n");
        else
            printf("Ban la cung bao binh\n");
    } else if (month == 2) {
        if (day <= 18)
            printf("Ban la cung bao binh\n");
        else
            printf("Ban la cung song ngu\n");
    } else if (month == 3){
    	 if (day <= 18)
            printf("Ban la cung song ngu\n");
        else
            printf("Ban la cung bach duong\n");
	}else if (month == 4){
    	 if (day <= 18)
            printf("Ban la cung bach duong\n");
        else
            printf("Ban la cung kim nguu\n");
	}else if (month == 5){
    	 if (day <= 18)
            printf("Ban la cung kim nguu\n");
        else
            printf("Ban la cung song tu\n");
	}else if (month == 6){
    	 if (day <= 18)
            printf("Ban la cung song tu\n");
        else
            printf("Ban la cung cu giai\n");
	}else if (month == 7){
    	 if (day <= 18)
            printf("Ban la cung cu giai\n");
        else
            printf("Ban la cung su tu\n");
	}else if (month == 8){
    	 if (day <= 18)
            printf("Ban la cung su tu\n");
        else
            printf("Ban la cung xu nu\n");
	}else if (month == 9){
    	 if (day <= 18)
            printf("Ban la cung xu nu\n");
        else
            printf("Ban la cung thien binh\n");
	}else if (month == 10){
    	 if (day <= 18)
            printf("Ban la cung thien binh\n");
        else
            printf("Ban la cung bo cap\n");
	}else if (month == 11){
    	 if (day <= 18)
            printf("Ban la cung co cap\n");
        else
            printf("Ban la cung nhan ma\n");
	}else if (month == 12){
    	 if (day <= 18)
            printf("Ban la cung nhan ma\n");
        else
            printf("Ban la cung ma ket\n");
	}


    return 0;
}