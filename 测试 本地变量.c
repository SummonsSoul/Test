#include<stdio.h>
int main()
{
	int a=0;
	{
		int a=5;
		printf("%d",a);
	}
	printf("%d",a);
	
}
