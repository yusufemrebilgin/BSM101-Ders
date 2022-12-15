//	find LCM of two numbers.

#include<stdio.h>

int main(){
	
	int sayi1, sayi2, min;
	
	printf("EKOK Bulma: \n");
	printf("Sayi giriniz: "); scanf("%d", &sayi1);
	printf("Sayi giriniz: "); scanf("%d", &sayi2);
	
	if( sayi1 >= sayi2 )
		min = sayi2;
	else
		min = sayi1;
		
	while(1){
	
		if( min % sayi1 == 0 && min % sayi2 == 0 ){
			printf("\nEKOK: %d", min);	
			break;
		}
		else{
			min++;
		}
		
	}
			
	return 0;			
}
	
	

