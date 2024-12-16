#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int n1=0,n2=1,n3,i,temp;  
  
 printf("Ban hay nhap n so nguyen bat ki: ");  
 scanf("%d",&temp);  
 printf("\n n so dau tien trong day fibonaci:%d \n n so dau tien trong day fibonaci:%d",n1,n2);  //in hai so 0 va 1  
  
 for(i=2;i<temp;++i)   //vong lap bat dau tu 2 boi vi 0 va 1 da duoc in 
 {  
  n3=n1+n2;  
  printf("\n n so dau tien trong day fibonaci:%d ",n3);  
  n1=n2;  
  n2=n3;  
 }  
 return 0;
}