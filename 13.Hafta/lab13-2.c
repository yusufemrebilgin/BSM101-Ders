//Fonksiyona gönderilen beş sayının ortalamasını hesaplayıp geri döndüren programı yazınız.
#include<stdio.h>

int ortalama(int, int, int, int, int); 

int main(){
	
	int a,b,c,d,e;
	printf("Bes adet sayi giriniz: \n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	printf("\nOrtalama: %d", ortalama(a,b,c,d,e));
	
	return 0;
}

int ortalama(int a, int b, int c, int d, int e){	
	return (a+b+c+d+e)/5;
}
