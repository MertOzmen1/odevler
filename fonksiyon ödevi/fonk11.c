//fonksiyonu aþaðýda tanýmlanmýþ küçük harfi büyük harf yapma

#include<stdio.h>

char mytoupper(char); //imzasý atýldý

int main(){
	printf("%c\n",mytoupper('a'));
	
	return 0;
}

char mytoupper(char ch){
	return ch-32;
}
