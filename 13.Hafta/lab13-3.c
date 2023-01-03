//Bir sayýnýn çift mi tek mi olduðunu kontrol eden fonksiyonu ve kullanýmýný gösteren programý yazýnýz.

#include<stdio.h>

void tekciftKontrol(int);

int main(){
	
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d", &n);
	
	tekciftKontrol(n);
	
	return 0;
}

void tekciftKontrol(int x){
	if( x%2==0)
		printf("\nSayi cifttir.");
	else	
		printf("\nSayi tektir.");
}
