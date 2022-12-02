#include<stdio.h>

int main(){
	
	int A,B,C;
	
	printf("Sayi 1: ");
	scanf("%d", &A);
	
	printf("Sayi 2: ");
	scanf("%d", &B);
	
	printf("Sayi 3: ");
	scanf("%d", &C);
	
	if( A>B && A>C )
		printf("En buyuk sayi %d", A);
	if( A<B && B>C )
		printf("En buyuk sayi %d", B);
	if( A<C && B<C )
		printf("En buyuk sayi %d", C);	
	
	return 0;	
	
}
