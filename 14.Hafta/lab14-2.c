//Fonksiyona gönderilen string içerisindeki karakterleri alfabetik sıraya sokan programı yazınız.
#include<stdio.h>

void alfabetikSiralama(char[]);

int main(){
	
	int i;
	char str[50];
	gets(str);
	
	alfabetikSiralama(str);
	puts(str);
	
	return 0;
}

void alfabetikSiralama(char str[]){
	
	int i,j;
	char temp;
	
	for(i=0 ; str[i]!= 0; i++)
		for(j=i+1 ; str[j]!= 0 ; j++)
			if( str[j]<str[i] && str[j]!=32){
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
	
}
