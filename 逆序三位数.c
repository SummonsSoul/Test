#include<stdio.h>

int main( )
{  
  int a=0; 
  int b=0;
 
  scanf("%d",&a);
  
   for(int i= 0;i< 3;i++){
   	printf("%d",a%10);
   	a/=10;
   }
  
  
  
  
  return 0;
}
