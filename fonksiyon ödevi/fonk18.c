//klavyeden girilen x deðerine göre seri toplama

#include<stdio.h>

int seriToplama(int x) {
	int toplam = 0;
	int i=1;
	
	for(i=1;i<=x;i++){		
	    toplam=i+toplam;
	}
	return toplam;
}

int main()
{
    int x;
 	printf("x degeri giriniz:"); 
	scanf("%d",&x);
	int seriToplam = seriToplama(x);
	printf("x icin seri toplam:%d", seriToplam);
	
    return(0);
}
