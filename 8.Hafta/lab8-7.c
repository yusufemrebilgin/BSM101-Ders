// Write C code to find the largest of three numbers A, B, and C.

#include<stdio.h>

int main(){
	
	int A, B, C;
	printf("Bir sayi giriniz: "); scanf("%d", &A);
	printf("Bir sayi giriniz: "); scanf("%d", &B);
	printf("Bir sayi giriniz: "); scanf("%d", &C);
	
	if( A>B && A>C )
		printf("\n%d sayisi en buyuktur.", A);
	if( B>A && B>C )
		printf("\n%d sayisi en buyuktur.", B);
	if( C>A && C>B )
		printf("\n%d sayisi en buyuktur.", C);
	
	
	return 0;
}
