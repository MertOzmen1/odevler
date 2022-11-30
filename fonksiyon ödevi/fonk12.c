//a deðerinin local ve global fonksiyon formundaki deðerleri yazdýrýlmasý

#include<stdio.h>

//kod bloðumuzda local deðiþken global deðiþkene göre önceliklidir.

int a=5;//global bir deðiþkendir ve her yerden gözükebilir.

int main(){
	if(1){
		int a;//if bloðuna göre bir local deðiþken
		printf("if blogunun icindeki a degeri:%d\n",a);
		//buradaki a local bir deðiþkendir ve deðer atamadýðým için sistem a yý 0 olarak kabul eder.
	}
	
	printf("%d\n",a);
	
	return 0;
}
	

