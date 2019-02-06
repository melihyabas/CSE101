#include<stdio.h>
int carpan_toplami(int sayi){ /*Girilen sayı ve varsa arkadaş sayısının çarpanları toplamına 2 kez bakılacağı için bunu hesaplayan bir fonksiyon oluşturuldu.*/

	int i=1	;
	int cToplam=0;/*Çarpan toplamını hesaplamak için döngüde kullanılacak değişkenler oluşturuldu. cToplam değişkeni çarpanların toplamını verecektir. */

	while(i<sayi)
	{	
	
		if(sayi%i==0)
		{
			cToplam+=i;
		}
	i++;
	}

	return cToplam;
}

	int main(){

	int sayi1,sayi2;/*Kullanıcıdan alınması için sayi1 ve test edilmesi için sayi2 oluşturuldu.*/


	printf("Arkadas sayisini bulmak istediginiz sayiyi girin:");
	scanf("%d",&sayi1);
	/*İlk sayı kullanıcıdan alındı*/


	sayi2=carpan_toplami(sayi1);/*sayi1'in çarpanları toplamı fonksiyon ile hesaplanıp sayı2'ye atandı*/
	

	if(carpan_toplami(sayi2)==sayi1&&sayi1!=sayi2)/*sayi2'nin çarpanları toplamı fonksiyon ile hesaplandı ve sayi1'e eşit ise sayı2 arkadaş sayı olarak ekrana bastırıldı. Bu eşitlikleri 0 da sağladığı için bu aşamada başta girilen değerin 0 olmaması koşulu eklendi.*/
	{
	printf("%d'nin arkadas sayisi:%d",sayi1,sayi2);
	}

	else/*Bu durum sağlanmıyorsa girilen sayının arkadaş sayısının olmadığı ekrana bastırıldı.*/
	{
	printf("%d sayisinin arkadas sayisi bulunmamaktadir.",sayi1);
	}


	return 0;
}
