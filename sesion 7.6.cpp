#include <stdio.h>

int main ()
{
    int a[5] = {1, 2, 3, 4, 5};
     for (int i=0; i<5; i++)
     {
     	if (a[i] % 2 == 0){
     		a[i] = a[i] + 3;		
		 } else if (a[i] % 2 != 0)
		 {
		 	a[i] = a[i] + 2;
		 }
	printf("%d\n",a[i]);	 
	 }

	
	return 0;
}