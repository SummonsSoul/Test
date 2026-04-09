/*根据题目描述，需要实现一个程序，读入一个非负整数（范围 [0, 1000000]），然后按照以下规则计算并输出对应的十进制值：

规则总结：

1. 数字编号：从个位开始，个位为 1 号，十位为 2 号，依此类推。
2. 奇偶判断：对于每一位数字 x 和其编号 n：
   · 若 x 和 n 的奇偶性相同（同为奇数或同为偶数），则在该位记下 1。
   · 否则记下 0。
3. 二进制序列：将所有位的 0 或 1 按照 从最高位到最低位（即编号从大到小）的顺序排列，形成一个二进制数字。
4. 转换为十进制：将这个二进制数字转换为十进制并输出。*/
#include<stdio.h>

int main(){
	
	int rec=0;
    int mirror;
	
	scanf("%d",&rec);
	mirror=rec;
    int t=0;
	for(;mirror>0;t++){
		mirror/=10;
//printf("%d",t)
	}
	int mid=0;
	int chang=(-1);
	int one=1;
	int square=0;
	int pu=0;
	int ci=0;
	
	
	while(t>0){
		mid=rec%10;
		rec/=10;
		mid%=2;
		
		
	if(ci>=2){
			square*=2;
	}
			
    
		if(one==1){
			if(mid==0){
	if(square==0){
  	pu=0;
	square+=2;}

			}else{
	if(square==0){
  	pu++;
	square+=2;
	goto esc;}	 
	        pu+=square; 
			}
		}else if(mid==0){
	if(square==0){
  	pu++;
	square+=2;
	goto esc;}	
	        pu+=square;
		}else{
	if(square==0){
  	pu=0;
	square+=2;}	  
	          
		}
		
esc:
		ci++;
	    one-=chang;
	    chang=(-chang);
		t--;
	}
	
	printf("%d",pu);
		
	return 0;
}


/*if(square==0){
	pu+
	square+=2;
}

pu+=spuare;
*/


