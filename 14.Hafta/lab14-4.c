/*
Küçükten büyüðe doðru sýralý bir diziye, dizinin sýrasýný bozmayacak þekilde, verilen bir elemaný ekleyen fonksiyonu yazýnýz.
*/
#include<stdio.h>
#define SIZE 5

void diziyeElemanEkle(int[],int);

int main(){
	
	int i, sayi, array[100];

	printf("Kucukten buyuge dogru sirali dizi giriniz: \n");		
	for(i=0 ; i<SIZE ; i++)
		scanf("%d", &array[i]);
	
	printf("\nDiziye eklenecek elamani giriniz: ");
	scanf("%d", &sayi);
	
	diziyeElemanEkle( array, sayi );


	return 0;
}

void diziyeElemanEkle(int array[], int eleman){
	
	int i, j, k, temp;
	for(i=0; i<SIZE ; i++){
		
		if( eleman>=array[i] && eleman<=array[i+1] ){
			k = i+1;
			for(j=SIZE-1 ; j!=i ; j--){
				array[j+1] = array[j];
			}
		}
	}
	array[k] = eleman;
	
	for(i=0; i<SIZE+1 ;i++)
		printf("%d ", array[i]);
}
