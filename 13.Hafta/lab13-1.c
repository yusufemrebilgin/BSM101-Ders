//Karenin alanýný hesaplayan fonksiyonu hazýrlayýp mainde kullanan programý yazýnýz.

#include<stdio.h>

int kareAlan(int);

int main(){
	
	int kenar;
	printf("Karenin alanini hesaplamak icin kenar degeri giriniz: ");
	scanf("%d", &kenar);
	
	printf("\nAlan: %d", kareAlan(kenar));
	
	return 0;
}

int kareAlan(int x){
	return x*x;
}
