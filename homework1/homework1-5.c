//	Convert Temperature from Fahrenheit (F) to Celsius (C).

#include<stdio.h>

int main(){
	
	float sicaklik_F, sicaklik_C;
	
	printf("Sicaklik(F) degeri giriniz: ");
	scanf("%f", &sicaklik_F);

	sicaklik_C = ( 5*(sicaklik_F-32)/9 );
	
	printf("Sicaklik(C): %f", sicaklik_C);
	
	return 0;
	
	
}
