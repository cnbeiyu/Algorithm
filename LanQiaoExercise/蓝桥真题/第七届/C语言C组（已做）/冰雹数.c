#include "stdio.h"
int main()
{
	long long N,i,max;
	scanf("%lld",&N);
	max = N;
	for(i = N;i>0;i = N--){ //ע��˴�Ϊ i = N-- 
		while(i!=1){
			if(i>max)
				max = i;
			if(i%2 == 0){
				i=i/2;
			}
			else
				i=3*i+1; 
		}	
	}	
	printf("%lld",max);//���ֵΪlld 
	return 0;
}
