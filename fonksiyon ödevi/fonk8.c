//büyük harfi küçük harf yapma

#include<stdio.h>

char mytoupper(char ch){
	return ch+32;
}

int main(){
	printf("%c\n",mytoupper('A'));
	
	return 0;
}
