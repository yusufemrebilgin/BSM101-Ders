// Write C code to convert the length in feet to centimeter.

#include<stdio.h>

int main(){
	
	float feet, cm;
	
	printf("Uzunluk(feet) degeri giriniz: "); scanf("%f", &feet);
	
	cm = feet * 30.48 ;
	
	printf("\nUzunluk degeri(cm): %.2f", cm);
	
	return 0;
}
