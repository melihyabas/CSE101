#include<stdio.h>
#define PI 3.14

int faktoriyel(int sayi)

{

    int sonuc=1;

    int i;

    for(i=1;i<=sayi;++i)        			/*Verien say�n�n faktoriyelini hesaplayan bir fonksiyon olu�turuldu.*/

    {

        sonuc*=i;

    }

    return (sonuc);

}


double uslu(double sayi,int us)

{

    double sonuc=1;
    int i;

    for (i=1;i<=us;i++)		/*Verilen verilen iki say�y� birini taban di�erini �s olacak �ekilde hesaplayan bir fonksiyon olu�turuldu.*/

    {

       sonuc*=sayi;

    }

    return sonuc;

}



double sint(double x)

{
	int tekrar;
	
	printf("kac acilim olsun?");
	scanf("%d",&tekrar);					/*Sin�s de�erinin hesaplanmas� i�in di�er fonksiyonlar�n kullan�ld��� bir double fonksiyon olu�turuldu.*/
											/*Taylor serisinin ne kadar a��laca��n� belirlemek i�in kullan�c�dan de�er al�nd�.*/
	
    double sonuc=0;

    int i;    

    for (i=0;i<tekrar;i++)

    {

        sonuc += uslu(-1,i) * uslu(x,2*i+1) / faktoriyel(2*i+1);  
   /*2i+1 denklemi kullan�ld� ��nk� taylor a��l�m�nda �s de�erleri 3,5.. �eklinde a��l�yor. ba�taki -1 ile �a�r�lan �sl� say� fonksiyonu ise ise a��l�mdaki negatif-pozitif ayr�m�n� yapmak i�in olu�turuldu.*/
    }

    return sonuc;

}

int main() { 

	  int derece;

	printf("bir sinus degeri giriniz:");
	scanf("%d",&derece);			/*kullan�c�dan sin�s de�eri al�nd�*/



   

  printf( "%lf\n" , sint( derece * PI / 180 ) ); /*al�nan de�er radyan cinsine �evrilerek son i�lemlerin yap�ld��� sinx fonksiyonu �a��r�larak ekrana bast�r�ld�.*/

 



	return 0;


}
