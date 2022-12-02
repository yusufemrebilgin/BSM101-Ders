#include<stdio.h>

int main(){
	
	int sayi, ilk_Basamak, son_Basamak;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	son_Basamak = sayi % 10;

	while( sayi > 0){
		
		ilk_Basamak = sayi % 10;
		sayi = sayi /10;
		
	}	
	
	printf("\nilk basamaktaki sayi: %d", ilk_Basamak);
	printf("\nson basamaktaki sayi: %d", son_Basamak);
	
	
	son_Basamak = son_Basamak + ilk_Basamak;
	ilk_Basamak = son_Basamak - ilk_Basamak;
	son_Basamak = son_Basamak - ilk_Basamak;
	
	
	printf("\nilk basamaktaki yeni sayi: %d", ilk_Basamak);
	printf("\nson basamaktaki yeni sayi: %d", son_Basamak);


	return 0;
	
}
