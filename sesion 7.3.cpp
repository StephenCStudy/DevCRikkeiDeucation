#include <stdio.h>

int main (){
	
	int a[5] = {1,2,3,4,5};
	
	for (int i=1; i < 6; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("so [%d] la so chan!\n", a[i]);
		}
	
	} 
	
	return 0;
}