// print Pascal triangle upto n rows.

#include<stdio.h>

int main(){
	
	int satir, bosluk, sutun;
	int i, j, a, x;
	int formul, faktoriyelSatir=0, faktoriyelSutun=0, faktoriyelEksi=0;
	
	printf("Pascal Ucgeni:\n");
	printf("\nSatir sayisi giriniz:"); scanf("%d", &satir);
	
	a = satir;
	
	for( i=0; i <= satir-1 ; i++){
		
		bosluk = a+5;
		for( bosluk ; bosluk>0 ; bosluk-- ){
			printf("   ");
		}
		
		if( i==0 )
			printf("1"); 
		
		for( sutun=0 ; sutun <= i ; sutun++ ){
			
			if( i!=0 && sutun==0 )
				printf("1  ");
			if( i == sutun && i!=0 )
				printf("  1");
			
			if( (i!=0 && i!=sutun ) && sutun !=0 ){
				
				faktoriyelSatir = 1;
				for( j=1 ; j<=i ; j++){
					faktoriyelSatir *= j;
				}	
			
				faktoriyelSutun = 1;
				for( j=1 ; j<=sutun ; j++ ){
					faktoriyelSutun *= j;
				}
			
		 		x = i - sutun;   // Satir - Sütun
				faktoriyelEksi = 1;
				for( j=1 ; j<=x ; j++ ){
					faktoriyelEksi *= j;
				}	
			
				formul = faktoriyelSatir / ( faktoriyelSutun * faktoriyelEksi ); 
				printf("  %d  ", formul);
			}
		}
			
			printf("\n");
			a = a-1;
	
	}
	
	return 0;
}

