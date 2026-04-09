#include<stdio.h>
/*读入正整数，（0，100000）输入负一表示结束*/ 

int main()
{
	int R=0;
	int r=0;
	int odd=0;
	int even=0;
	
	while(r!=(-1)){
		scanf("%d",&R);
		r=R;
		while(r>1){
			r/=2;
			if(r==1){
				odd+=1;
				break;
			}
		}if(r==0){
				even+=1;
				
		   }
	}
	
	printf("\nodd=%d ",odd);
	printf("even=%d",even);
	
	return 0;
}
