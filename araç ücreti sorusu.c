#include<stdio.h>

int main(){
	int gun, km, ucret;
	char aracTipi;
	printf("kiralamak istediginiz arabayi belirtiniz(arazi:A veya a, binek:B veya b, station:S veya s, spor:P veya s): ");
	scanf("%c",&aracTipi);
	printf("arabayi kac gun kullandiginizi belirtin:");
	scanf("%d",&gun);
	printf("arabada kac km yaptiginizi belirtin:");
	scanf("%d",&km);
	
	switch(aracTipi){
		case 'a': ucret=(20+km*18); break;
		case 'A': ucret=(20+km*18); break;
		case 'b': ucret=(32+km*22); break;
		case 'B': ucret=(32+km*22); break;
		case 'c': ucret=(43+km*28); break;
		case 'C': ucret=(43+km*28); break;
		case 's': ucret=(51+km*36); break;
		case 'S': ucret=(51+km*36); break;	
	}
	
	printf("\narabanin tipi:%c\n",aracTipi);
	printf("arabayi kullanma suresi:%d",gun);
	printf("\narabada yapilan km:%d\n",km);
	printf("toplam odemeniz gereken miktar:%d\n",ucret);
	return 0;
}
