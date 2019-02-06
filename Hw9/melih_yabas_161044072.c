#include <stdio.h>
#include <stdlib.h>		/*Rastgele sayý üretmek, matematiksel ifade kullanmak ve genel printf, scanf gibi fonsiyonlarý kullanmak için gerekli kütüphaneler oluþturuldu.*/
#include <time.h>
#include <math.h>
int main() {
	srand(time(NULL));  /*Rastgele sayý üreten fonksiyon yazýldý.*/
	
	
	int v1[20];
	int v2[20];			/*2 adet 20 elemanlý array oluþturuldu.*/
	
	int i;				
	for(i=0;i<20;i++)
	{						/*for döngüsü ve rand()% fonksiyonu kullanýlarak bu arrayler [0-10] arasý rastgele sayýlarla dolduruldu.*/
		v1[i]=rand()%11;	/*10 sayýsýný da dahil etmek için 11'e kadar olan sayýlarý kullandýk.*/
		v2[i]=rand()%11;
	}

	
	printf("Vektorler: \n");
	printf("v1 : ");
	
		for(i=0;i<19;i++)
	{						/*for döngüsü ile arrayler ekrana bastýrýldý. Arrayin son elemaný sonda "," olmamasý için ayrý bastýrýldý.*/
	
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
	{									/*0'a eþit olmayan array elemanlarýný bulmak için bir sayaç oluþturuldu ve arrayin elemanlarý döngüye sokularak 0 olmayan geldiðinde sayaç artýrýldý.*/
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
	 	v3[i]=v1[i]+v2[i];			/*v1 ve v2 arrayleri toplanarak v3 arrayine atandý.*/
	}
	for(i=0;i<19;i++)
	{
	 	printf("%d,",v3[i]);
	}
	printf("%d",v3[19]);

	int iccarpim=0;
	for(i=0;i<20;i++)
	{
		iccarpim+=v1[i]*v2[i];		/*v1 ve v2 arraylerinin iç çarpýmlarý buluncu*/
	}
	
	int v1kareler=0;
	for(i=0;i<20;i++)
	{
		v1kareler+=v1[i]*v1[i];		/*v1'in kareleri toplamý hesaplandý.*/
	}

	int v2kareler=0;
	for(i=0;i<20;i++)
	{								/*v2'nin kareleri toplamý hesaplandý.*/
		v2kareler+=v2[i]*v2[i];
	}

	float boycarpim=sqrt(v1kareler)*sqrt(v2kareler); /*sqrt fonksiyonu kullanýlarak hesaplanan karelerin karekökleri çarpýldý.*/
	
	float sim;
	sim=iccarpim/boycarpim;			/*cosine similarity hesaplandý.*/
	printf("\n");
	printf("\n");
	printf("sim(v1,v2) : %f",sim);
	
	return 0;
}
