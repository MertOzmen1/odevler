//fonksiyonu aþaðýda tanýmlanmýþ kiþiye selam vermek

#include<stdio.h>

/*fonksiyonlarý int mainin altýnda tanýmlamak istiyorsak
int mainin yukarýlarýnda imzasýný atmanýz gerekir.
*/

void kisiyeSelam(char[]);//imzasý atýldý

int main(){
	kisiyeSelam("Mert");
	
	return 0;
}

void kisiyeSelam(char isim[15]){
	printf("Merhaba %s!\n",isim);// %s string için kullanýlýr
}
