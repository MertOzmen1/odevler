//a de�erinin local ve global fonksiyon formundaki de�erleri yazd�r�lmas�

#include<stdio.h>

//kod blo�umuzda local de�i�ken global de�i�kene g�re �nceliklidir.

int a=5;//global bir de�i�kendir ve her yerden g�z�kebilir.

int main(){
	if(1){
		int a;//if blo�una g�re bir local de�i�ken
		printf("if blogunun icindeki a degeri:%d\n",a);
		//buradaki a local bir de�i�kendir ve de�er atamad���m i�in sistem a y� 0 olarak kabul eder.
	}
	
	printf("%d\n",a);
	
	return 0;
}
	

