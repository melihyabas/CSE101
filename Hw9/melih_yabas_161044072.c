#include <stdio.h>
#include <stdlib.h>		/*Rastgele say� �retmek, matematiksel ifade kullanmak ve genel printf, scanf gibi fonsiyonlar� kullanmak i�in gerekli k�t�phaneler olu�turuldu.*/
#include <time.h>
#include <math.h>
int main() {
	srand(time(NULL));  /*Rastgele say� �reten fonksiyon yaz�ld�.*/
	
	
	int v1[20];
	int v2[20];			/*2 adet 20 elemanl� array olu�turuldu.*/
	
	int i;				
	for(i=0;i<20;i++)
	{						/*for d�ng�s� ve rand()% fonksiyonu kullan�larak bu arrayler [0-10] aras� rastgele say�larla dolduruldu.*/
		v1[i]=rand()%11;	/*10 say�s�n� da dahil etmek i�in 11'e kadar olan say�lar� kulland�k.*/
		v2[i]=rand()%11;
	}

	
	printf("Vektorler: \n");
	printf("v1 : ");
	
		for(i=0;i<19;i++)
	{						/*for d�ng�s� ile arrayler ekrana bast�r�ld�. Arrayin son eleman� sonda "," olmamas� i�in ayr� bast�r�ld�.*/
	
		printf("%d,",v1[i]);
		
	}
	printf("%d",v1[19]);
	
	printf("\n");
	printf("v2 : ");
	
		for(i=0;i<19;i++)
	{
	
		printf("%d,",v2[i]);
	}
	printf("%d",v2[19]);
	
	printf("\n");
	printf("\n");
	
	int sayac=0;
	for(i=0;i<20;i++)
	{									/*0'a e�it olmayan array elemanlar�n� bulmak i�in bir saya� olu�turuldu ve arrayin elemanlar� d�ng�ye sokularak 0 olmayan geldi�inde saya� art�r�ld�.*/
		if(v1[i]!=0)
		sayac++;
	}
	printf("V1 L0 Norm : %d\n",sayac);
	
	sayac=0;
	for(i=0;i<20;i++)
	{
		if(v2[i]!=0)
		sayac++;
	}
	printf("V2 L0 Norm : %d",sayac);
	
	printf("\n");
	printf("\n");
	
	printf("v1+v2 = ");
	int v3[20];
	for(i=0;i<20;i++)
	{
	 	v3[i]=v1[i]+v2[i];			/*v1 ve v2 arrayleri toplanarak v3 arrayine atand�.*/
	}
	for(i=0;i<19;i++)
	{
	 	printf("%d,",v3[i]);
	}
	printf("%d",v3[19]);

	int iccarpim=0;
	for(i=0;i<20;i++)
	{
		iccarpim+=v1[i]*v2[i];		/*v1 ve v2 arraylerinin i� �arp�mlar� buluncu*/
	}
	
	int v1kareler=0;
	for(i=0;i<20;i++)
	{
		v1kareler+=v1[i]*v1[i];		/*v1'in kareleri toplam� hesapland�.*/
	}

	int v2kareler=0;
	for(i=0;i<20;i++)
	{								/*v2'nin kareleri toplam� hesapland�.*/
		v2kareler+=v2[i]*v2[i];
	}

	float boycarpim=sqrt(v1kareler)*sqrt(v2kareler); /*sqrt fonksiyonu kullan�larak hesaplanan karelerin karek�kleri �arp�ld�.*/
	
	float sim;
	sim=iccarpim/boycarpim;			/*cosine similarity hesapland�.*/
	printf("\n");
	printf("\n");
	printf("sim(v1,v2) : %f",sim);
	
	return 0;
}
