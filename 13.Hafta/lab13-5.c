//Girilen cümleyi parametre olarak alıp içerisindeki kelime sayısını bulan fonksiyon yazınız.
#include<stdio.h>

int kelimeSay(char[]);

int main(){
	
	char cumle[100];
	printf("Enter a sentence: ");
	gets(cumle);
	
	printf("\nWord count: %d", kelimeSay(cumle));
	
	return 0;
}

int kelimeSay(char str[]){
	
	int i , j , kelime=0;
	
	for( i=0; str[i]!='\0' ; i++ )
	
		if(  (str[i]<=90 && str[i]>=65) || (str[i]<=122 && str[i]>=90)  )
			if( (str[i+1]>=32 && str[i+1]<=64) || str[i+1]==0 )
				kelime++;
				
	return kelime;
}
