// Enter a value from the keyboard to the 8-element float array. Calculate the average of the entered values and print it on the screen.

#include<stdio.h>

#define N 8

int main(){
	
	int i;
	float toplam=0, A[N];
	
	for( i=0 ; i<N ; i++ ){
		
		printf("Bir deger giriniz: "); scanf("%f", &A[i]);
	}
	
	for( i=0 ; i<N ; i++ ){
		toplam += A[i];
	}
	
	printf("\nOrtalama: %.2f", toplam/N);

	
	return 0;
}
