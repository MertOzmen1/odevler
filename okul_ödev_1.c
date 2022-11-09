//ÖDEV1
//SORU1

#include<stdio.h>

int main()
{
	float alesPuani,ydsPuani,mezuniyetOrt;
	printf("ALES puaninizi girin:\n");
	scanf("%f",&alesPuani);
	printf("Yabanci dil puaninizi girin:\n");
	scanf("%f",&ydsPuani);
	printf("Mezuniyet ortalamasini girin:\n");
	scanf("%f",&mezuniyetOrt);
	
	float genelOrt=alesPuani/2+ydsPuani/4+mezuniyetOrt/4;
	
	if((alesPuani<0||ydsPuani<0||mezuniyetOrt<0||alesPuani>100||ydsPuani>100||mezuniyetOrt>100))
	{
		printf("\nERROR!!\nYanlis deger girdiniz.\n");
	}
	else
	{
	    printf("\nGenel ortalama:%.1f\n",genelOrt);
	}
	
	if(genelOrt>60&&genelOrt<=100&&ydsPuani>70&&ydsPuani<=100)
	{
		printf("Basvuru Yapabilirsiniz.\n\n\n\n\n");
	}
	else
	{
		printf("Basvuru Yapamazsiniz.\n\n\n\n\n");
	}
	
	
	//ÖDEV1
	//SORU2
		
	float kilo,boy;
	printf("Kilonuzu kilogram cinsinden giriniz:\n");
	scanf("%f,",&kilo);
	printf("Boyunuzu metre giriniz:\n");
	scanf("%f,",&boy);
	float vki=kilo/(boy*boy);
	printf("\nVucut kitle indeksiniz:%.2f\n",vki);
	
	if(vki<18.5)
	{
		printf("Zayifsiniz");
	}
	if(vki>=18.5 && vki<=24.9)
	{
		printf("Normal kilodasiniz");
	}
	if(vki>=25 && vki<=29.9)
	{
		printf("Kilolusunuz");
	}
	if(vki>=30 && vki<=34.9)
	{
		printf("Obezsiniz");
	}
	if(vki>=35)
	{
		printf("Morbid obezsiniz");
	}	
	
	return 0;
}
