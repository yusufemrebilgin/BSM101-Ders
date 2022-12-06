// Convert Temperature from Fahrenheit to Celsius.

#include<stdio.h>

int main(){
	
	float sicaklikF, sicaklikC;
	
	printf("Sicaklik(F) degeri giriniz: "); scanf("%f", &sicaklikF);
	
	sicaklikC = ( 5*(sicaklikF-32) ) / 9;
	
	printf("Sonuc(C): %.2f", sicaklikC);
	
	return 0;
}
