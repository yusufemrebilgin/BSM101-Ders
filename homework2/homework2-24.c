//convert a binary number into a decimal number without using array, function and while loop

#include<stdio.h>

int main(){
	
	int binary;
	int i, j, us, taban;
	int decimal = 0;
		
	printf("Donusum icin ikilik sisteme gore bir sayi giriniz: "); scanf("%d", &binary);
	
	for( i=0 ; binary!=0 ; i++ ){
		
		us = 1 , taban =2;	
		for( j=1 ; j<=i ; j++){
			us *= taban;
		}
		if( binary%2==1 )
			decimal += us;
		
		binary /= 10;
		
	}
	
	printf("\nOndalik deger: %d", decimal);
	
	return 0;
}
