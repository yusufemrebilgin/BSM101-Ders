//Bir say�n�n �ift mi tek mi oldu�unu kontrol eden fonksiyonu ve kullan�m�n� g�steren program� yaz�n�z.

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
