//	read the two sides of a rectangle and calculate its area and perimeter.


#include<stdio.h>

int main(){
	
	int kisa_kenar , uzun_kenar , cevre , alan;
	
	printf("Dikdortgenin kisa kenari: ");
	scanf("%d", &kisa_kenar);
	
	printf("Dikdortgenin uzun kenari: ");
	scanf("%d", &uzun_kenar);
	
	alan = kisa_kenar * uzun_kenar;
	cevre = 2 * ( kisa_kenar + uzun_kenar );
	
	printf("\nAlan: %d", alan);
	printf("\nCevre: %d", cevre);
	
	return 0;
	
}
