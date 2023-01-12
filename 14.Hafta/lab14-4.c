/*
K���kten b�y��e do�ru s�ral� bir diziye, dizinin s�ras�n� bozmayacak �ekilde, verilen bir eleman� ekleyen fonksiyonu yaz�n�z.
*/
#include<stdio.h>
#define SIZE 5

void diziyeElemanEkle(int[]);

int main(){
	
	int i, array[100];

	printf("Kucukten buyuge dogru sirali dizi giriniz: \n");		
	for(i=0 ; i<SIZE ; i++){
		scanf("%d", &array[i]);
	}
	
	diziyeElemanEkle(array);
	for( i=0;i<SIZE+1;i++ )
		printf("%d ", array[i]);

	return 0;
}

void diziyeElemanEkle(int array[]){
	
	int i, j, sayi;
	printf("\nDiziye eklenecek elamani giriniz: "); scanf("%d", &sayi);
	array[SIZE] = sayi;
	
	for( i=0 ; i<SIZE ; i++ )
		for( j=i+1 ; j<SIZE+1 ; j++ )
			if( array[i]>array[j] ){
				array[i] = array[i] + array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j];
			}
				
}
