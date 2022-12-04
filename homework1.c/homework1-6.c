//	convert the length in feet to centimeter.


#include<stdio.h>

int main(){
	
	
	float feet=0, cm=0;
	
	printf("Feet cinsinde uzunluk degeri giriniz: ");
	scanf("%f", &feet);
	
	cm = feet*30.48;
	
	printf("Uzunluk(cm): %.2f", cm);
	
	return 0;
	
	
}
