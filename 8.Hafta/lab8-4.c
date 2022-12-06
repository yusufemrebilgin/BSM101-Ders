// Determine Whether a Temperature is Below or Above the Freezing Point.

#include<stdio.h>

int main(){
	
	int sicaklik;
	printf("Sicaklik(C) degeri giriniz: "); scanf("%d", &sicaklik);

	if( sicaklik > 0 )
		printf("\nSicaklik donma noktasi uzerindedir.");
	else
		printf("\nSicaklik donma noktasi altindadir.");
		
	return 0;
}
