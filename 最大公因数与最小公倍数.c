#include<stdio.h>

int max(int c,int d)
{   
    int t=0;
	if(c>d){
     	t=c;
	}else if(c==d){
	    t=c;
	}else{
    	t=d;
	}
	 
	return t;
	
}

int Lim_Common_factor(int c, int d)
{
	int t=0;
	if(c==d){
		t=c;
	}else{
	    t=c*d;
	}
   	
   	return t;
}

int Greatest_Common_Divisor(int c,int d)
{
	int t=0;
	int a=c;
	int b=d;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	
	
	return a;
}

int main()
{   
    printf("Êý×Ö¿Õ¸ñÊý×Ö\n");
	int c=0 , d=0;
//	int u=0;
	scanf("%d %d",&c,&d);
   if(c==0||d==0){
   	printf("Greatest Common_Divisor=0\nLim_Common_factor=0\n");
   	goto hi;
   }
//	u=max(c,d);
    printf("max=%d\n",max(c,d));
    printf("Greatest Common_Divisor=%d\n",Greatest_Common_Divisor(c,d));
    printf("Lim_Common_factor=%d\n", Lim_Common_factor(c,d));
 //   Greatest_Common_Divisor(c,d);
     
 //   Lim_Common_factor(c,d);
    hi:

	return 0;
}
