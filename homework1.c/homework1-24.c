#include<stdio.h>

int main(){
	
	int sayi, sayac=0, en_cok_tekrar_eden=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
		
	int x , y;
	x = sayi;
	
	while( sayi > 0 ){
		
		y = sayi % 10;
		
			while( x > 0){
				
				if( x % 10 == y ){
					sayac++;
				}
				
				if( sayac >= en_cok_tekrar_eden ){
					
					en_cok_tekrar_eden = y;
				}
				
				
			x = x / 10;
				
					
			}	
		
		sayi = sayi / 10;
			
	} 
	
	printf("En cok tekrar eden sayi: %d", en_cok_tekrar_eden);
	
	
	return 0;
	
	
}
