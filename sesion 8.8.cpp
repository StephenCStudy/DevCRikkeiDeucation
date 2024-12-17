#include <stdio.h>
int main() {
	int n = 3;
	 int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	 }; 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("%d - ", arr[i][n - 1 - i]);
        sum += arr[i][n - 1 - i];
    }
    printf("\nTong cac phan tu tren duong cheo phu: %d\n", sum);

    return 0;
}