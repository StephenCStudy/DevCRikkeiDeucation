#include <stdio.h>

int main (){
	int list[5] = {1,2,3,4,5};
	int length;
	for (int i= 0	; i < 5; i++ )
	{
	printf("\ncac phan tu trong list la: %d ",list[i]);
    }
    length = sizeof(list)/ sizeof (list[5]);
     printf("\n===== do dai cua mang: %d =====", length);
    
	return 0;
}