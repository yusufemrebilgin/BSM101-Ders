/*	
	   	    A
		   ABA
		  ABCBA
		 ABCDBCA
*/

#include<stdio.h>

int main(){
	
	int i, j, k, bosluk, satirSayisi, A;
	
	printf("Satir sayisi giriniz: "); scanf("%d", &satirSayisi);
	printf("\n");
	
	bosluk= satirSayisi+20;
	
	for( i=1 ; i<=satirSayisi ; i++ ){
		
		j = bosluk;
		for( j ; j>0 ; j-- ){
			printf(" ");
		}
		
		A = 65;
		for( k=1; k<=i ; k++){
			printf("%c", A++);
		}
		
		A=A-1;
		k=k-1;
		
		for( k ; k>1 ; k-- ){
			printf("%c", --A);
		}
	
		printf("\n");
		bosluk = bosluk-1;
	}
	
	return 0;
}

