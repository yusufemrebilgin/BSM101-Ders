//	Determine Whether a Temperature is Below or Above the Freezing Point.

#include<stdio.h>

int main(){
	
	float Sicaklik;
	
	printf("Sicaklik(C) degeri giriniz: ");
	scanf("%f", &Sicaklik);
	
	
	if(Sicaklik>0)
		printf("Sicaklik donma noktasinin ustunde.");
	else
		printf("Sicaklik donma noktasi altinda.");
	
	
	return 0;	

}
