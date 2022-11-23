#include<stdio.h>

int main(){
	
	int aracKodu,rMarka=0,mMarka=0,hMarka=0,fMarka=0;
	float benzinUcreti,rFiyat=0,mFiyat=0,hFiyat=0,fFiyat=0;
	printf("PROGRAMDAN CIKMAK ICIN MARKA OLARAK 111 GIRINIZ\n");
	
	for( ;aracKodu!=111; ){
		printf("Marka, tutar giriniz:");
    	scanf("%d %f",&aracKodu,&benzinUcreti);
    	if(aracKodu==1){	
    		rMarka+=1;
    		rFiyat+=benzinUcreti;	
		}
		else if(aracKodu==2){
			mMarka+=1;
			mFiyat+=benzinUcreti;
		}
		else if(aracKodu==3){
			hMarka+=1;
			hFiyat+=benzinUcreti;
		}
		else if(aracKodu==4){
			fMarka+=1;
			fFiyat+=benzinUcreti;
		}
	}
	
	if(rMarka>mMarka && rMarka>hMarka && rMarka>fMarka){
		printf("En cok gelen arac markasi: Renault (%d kez)\n",rMarka);
	}
	else if(mMarka>rMarka && mMarka>hMarka && mMarka>fMarka){
		printf("En cok gelen arac markasi: Mazda (%d kez)\n",mMarka);
	}
	else if(hMarka>rMarka && hMarka>mMarka && hMarka>fMarka){
		printf("En cok gelen arac markasi: Honda (%d kez)\n",hMarka);
	}
	else if(fMarka>rMarka && fMarka>mMarka && fMarka>hMarka){
		printf("En cok gelen arac markasi: Ford (%d kez)\n",fMarka);
	}
	
	if(rFiyat>mFiyat && rFiyat>hFiyat && rFiyat>fFiyat){
		printf("En cok satis yapilan marka: Renault (%.2f YTL)\n",rFiyat);
	}
	else if(mFiyat>rFiyat && mFiyat>hFiyat && mFiyat>fFiyat){
		printf("En cok satis yapilan marka: Mazda (%.2f YTL)\n",mFiyat);
	}
	else if(hFiyat>rFiyat && hFiyat>mFiyat && hFiyat>fFiyat){
		printf("En cok satis yapilan marka: Honda (%.2f YTL)\n",hFiyat);
	}
	else if(fFiyat>rFiyat && fFiyat>mFiyat && fFiyat>hFiyat){
		printf("En cok satis yapilan marka: Ford (%.2f YTL)\n",fFiyat);
	}
	
	return 0;		
}
