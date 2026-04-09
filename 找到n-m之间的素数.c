#include<stdio.h>

int main(){
	int n=0,m=0;
	printf("输入范围 两个数字 空格分割\n"); 
	scanf("%d %d",&n,&m);
	int i=0;
	
	for(i=n;(n<=i)&&(i<=m);i++){
		int isprime=n;
		int r;
		int one=0;
		for(r=1;r<=i;r++){
			
			if((n%r)==0){
				
				one++;
			}
			if((one<3)&&(one>2)){
				printf("%d",i);
				
			}
			
		}
		
		
		
	}
	
}
