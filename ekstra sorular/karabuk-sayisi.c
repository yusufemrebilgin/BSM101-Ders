// Girilen sayının Karabük sayısı olup olmadığına bakma. (Örn. Karabük sayısı: 1, 2, 111, 2222, 3333,...)

#include<stdio.h>

int main(){
	
	int x, number;
	
	printf("Bir sayi giriniz: "); scanf("%d", &number);
	
	x = number%10;
	
	while( number>0 ){
			
		if( number%10==x ){
			number = number/10;
			if( number==0 )
				printf("\nGirilen sayi Karabuk sayisidir.");
		}
		else{
			printf("\nGirilen sayi Karabuk sayisi degildir."); 
			break;
		} 
	}

	return 0;
}
