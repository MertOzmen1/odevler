//küçük harfi büyük harf yapmak

#include<stdio.h>

char mytoupper(char ch){
	return ch-32;
}

int main(){
	printf("%c\n",mytoupper('a'));
	
	return 0;
}
