#include<stdio.h>
/*读入正整数，（0，100000）输入负一表示结束*/ 

int main()
{
	int R=0;
	int r=0;
	int odd=0;
	int even=0;
	
	do{
		scanf("%d",&R);
		r=R;
		while(r>0){
			r/=2;
			if(r=1){
				odd+=1;
			}if(r=0){
				even+=1;
			}
		}
		
	}while(r!=(-1));
	
	printf("\nood=%d ",odd);
	printf("even=%d",even);
	
}
