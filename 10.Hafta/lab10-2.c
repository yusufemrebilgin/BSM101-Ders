/* 
 Write a program that transfers the numbers given until -1 is entered from the keyboard, and then prints the square of each element to the screen. 
 (The number of array elements will be maximum 10.)
*/

#include<stdio.h>
#include<math.h>

#define N 10

int main(){
	
	int i, a, A[N];
	
	printf("Girilen sayilarin karesini bulma (Durmak icin (-1) giriniz.): ");
	
	for( i=0 ; i<N ; i++ ){
		
		printf("\nBir sayi giriniz: "); scanf("%d", &A[i]);
		if( A[i]==-1 )
			break;
		a = pow( A[i], 2);
		printf("Karesi: %d", a);	
				
	}
	
	return 0;
}

