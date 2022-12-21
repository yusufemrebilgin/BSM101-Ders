// Write a program that takes a 10-element array from the keyboard and writes it in reverse to the screen.

#include<stdio.h>

#define N 10

int main(){
	
	int i, j=N-1 ,temp, A[N];
	printf("10 eleman giriniz: \n\n");
	
	for( i=0 ; i<N ; i++ ){
		scanf("%d", &A[i]);
	}
	for( i=0 ; i<N/2 ; i++ ){
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
		j--;
	}
	
	printf("\n");
	
	for( i=0 ; i<N ; i++ ){
		printf("%d, ", A[i]);
	}
	
	
	return 0;
}
