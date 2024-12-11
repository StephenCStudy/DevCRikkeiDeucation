#include <stdio.h>

int main (){
	int a,b,c;
	printf("nhap vao so nguyen a: ");
	scanf("%d", &a);
	printf("nhap vao so nguyen b: ");
	scanf("%d", &b);
	printf("nhap vao so nguyen c: \n");
	scanf("%d", &c);
	
    if ( (c>a && c<b) || (c>b && c<a) ){
	
    printf("so c(%d) nam trong khoang b(%d) va a(%d)",c,b,a);
    } else {
    	printf("so c(%d)  khon nam trong khoang b(%d) va a(%d)",c,b,a);
	}
	return 0;
}