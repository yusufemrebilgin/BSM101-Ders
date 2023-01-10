/*
10 elemanlý tamsayý dizisine klavyeden deðerler girilerek bir fonksiyona gönderilecek.
Dizide yer alan en büyük ilk iki sayýyý bularak ekrana yazdýran fonksiyonu yazýnýz.
*/

#include<stdio.h>
#define SIZE 10

void enBuyukIkiSayi(int []);

int main(){
	
	int i, array[SIZE];
	printf("On adet sayi giriniz:\n");
	
	for(i=0;i<SIZE;i++)
		scanf("%d", &array[i]);
		
	enBuyukIkiSayi(array);
	
	return 0;
}

void enBuyukIkiSayi(int x[]){
	
	int i, max1, max2;
	if( x[0]>x[1] ){
		max1 = x[0];
		max2 = x[1];
	}
	else{
		max1 = x[1];
		max2 = x[0];
	}
	
	for(i=2 ; i<SIZE ; i++){
		if( max2 < x[i] && max1 < x[i] ){
			max2 = max1;
			max1 = x[i];
		}
		else if( max2 < x[i] )
			max2 =  x[i];
	}
	
	printf("\nEn buyuk birinci sayi: %d", max1);
	printf("\nEn buyuk ikinci sayi: %d", max2);
	
}
