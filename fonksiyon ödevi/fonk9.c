//fonksiyonu a�a��da tan�mlanm�� ki�iye selam vermek

#include<stdio.h>

/*fonksiyonlar� int mainin alt�nda tan�mlamak istiyorsak
int mainin yukar�lar�nda imzas�n� atman�z gerekir.
*/

void kisiyeSelam(char[]);//imzas� at�ld�

int main(){
	kisiyeSelam("Mert");
	
	return 0;
}

void kisiyeSelam(char isim[15]){
	printf("Merhaba %s!\n",isim);// %s string i�in kullan�l�r
}
