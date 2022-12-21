// Write a program that assigns the digits of the maximum 5-digit number to an array and prints it to the screen.

#include<stdio.h>

#define MAX 5

int main(){
	
	int i, sayi, basamak, A[MAX];
	
	printf("Bir sayi giriniz: "); scanf("%d", &sayi);
	
	for( i=0 ; i<MAX ; i++ ){
	
		A[i] = sayi%10;
		sayi = sayi/10;
		if( sayi==0 )
			break;
		basamak++;
	}
	printf("\n");
	
	for( i ; basamak!=0 ; i-- ){
		printf("%3d", A[i]);
		basamak--;
		
	}
	
	return 0;
}
