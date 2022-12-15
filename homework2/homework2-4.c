// 	find the sum of the first 50 natural numbers.

#include<stdio.h>

int main(){
	
	int n, toplam = 0;
	
	for( n=0 ; n<50 ; n++ ){
		
		toplam += n;
		
	}
	
	printf("Toplam: %d", toplam);
	
	return 0;
	
}
