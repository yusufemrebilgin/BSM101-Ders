// standart sapma hesaplama

#include<stdio.h>
#include<math.h>
#define SIZE 100

int main(){
	
	int i, j, array[SIZE];
	float toplam=0 , ortalama=0 , standartSapma=0;
	
	printf("*Standart Sapma Hesaplama*");
	printf("\n\nDeger giriniz (Durmak icin (-1) giriniz.): \n\n");
	
	for( i=0 ; i<SIZE ; i++ ){
		printf("%d) ", i+1);
		scanf("%d", &array[i]);
		if( array[i]==-1 )
			break;
		toplam += array[i];
	}
	ortalama = toplam/i;
	toplam=0;

	for( j=0 ; j<i ; j++ ){
		toplam += pow( (array[j]-ortalama),2 );
	}
	standartSapma = sqrt( toplam/ (i-1) );
	printf("\nStandart Sapma: %.3f", standartSapma );
	
	return 0;
}
	


