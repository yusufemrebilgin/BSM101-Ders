//Kullanıcının gönderdiği kelime içerisinde kaç tane sesli harf olduğunu bulan fonksiyonu yazınız.
#include<stdio.h>

int sesliHarfSayac(char[]);

int main(){
	
	char str[50]; 
	gets(str);
	
	printf("\nSesli harf sayisi: %d", sesliHarfSayac(str));	
	
	return 0;
}

int sesliHarfSayac(char str[]){
	
	char sesliHarf[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
	int i,j,sayac=0;
	
	for(i=0 ; str[i]!='\0' ; i++)
		for(j=0 ; j<10 ; j++)
			if( str[i]==sesliHarf[j])
				sayac++;
	
	return sayac;
}
