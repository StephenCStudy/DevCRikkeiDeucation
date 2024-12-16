#include <stdio.h>

int main ()
{
	int a[5] = {2, 4, 6, 8 ,9};
	
	for (int i=0; i < 5; i++)
	{
		if (a[i] ==2)
		{
		printf("\nphan tu nho nhat co trong mang la: %d",a[i]);	
		} else if (a[i] == 9) 
		{ 
		printf("\nphan tu lon nhat co trong mang la: %d",a[i]);
		}
	}
	
	
	
	
	return 0;
}