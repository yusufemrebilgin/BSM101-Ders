//Karenin alan�n� hesaplayan fonksiyonu haz�rlay�p mainde kullanan program� yaz�n�z.

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
