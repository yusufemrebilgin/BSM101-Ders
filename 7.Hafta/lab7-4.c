#include<stdio.h>



int main(){
	
	int pi, yaricap, sayi, cevre, alan;
	
	pi = 3.14;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
		if(sayi==1){
		
			printf("Yaricap giriniz: ");	
			scanf("%d", &yaricap);
			cevre = 2*pi*yaricap;
			printf("Cevre: %d", cevre);
		}
			
		else if(sayi==2){
		
			printf("Yaricap giriniz: ");
			scanf("%d,", &yaricap);
			alan= 2*pi*yaricap*yaricap;
			printf("%d", alan);
		}
		else
			printf("Yanlis giris.");
		
		
	return 0;	
	
}
