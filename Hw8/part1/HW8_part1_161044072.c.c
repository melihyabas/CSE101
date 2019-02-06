#include<stdio.h>
#define PI 3.14

int faktoriyel(int sayi)

{

    int sonuc=1;

    int i;

    for(i=1;i<=sayi;++i)        			/*Verien sayýnýn faktoriyelini hesaplayan bir fonksiyon oluþturuldu.*/

    {

        sonuc*=i;

    }

    return (sonuc);

}


double uslu(double sayi,int us)

{

    double sonuc=1;
    int i;

    for (i=1;i<=us;i++)		/*Verilen verilen iki sayýyý birini taban diðerini üs olacak þekilde hesaplayan bir fonksiyon oluþturuldu.*/

    {

       sonuc*=sayi;

    }

    return sonuc;

}



double sint(double x)

{
	int tekrar;
	
	printf("kac acilim olsun?");
	scanf("%d",&tekrar);					/*Sinüs deðerinin hesaplanmasý için diðer fonksiyonlarýn kullanýldýðý bir double fonksiyon oluþturuldu.*/
											/*Taylor serisinin ne kadar açýlacaðýný belirlemek için kullanýcýdan deðer alýndý.*/
	
    double sonuc=0;

    int i;    

    for (i=0;i<tekrar;i++)

    {

        sonuc += uslu(-1,i) * uslu(x,2*i+1) / faktoriyel(2*i+1);  
   /*2i+1 denklemi kullanýldý çünkü taylor açýlýmýnda üs deðerleri 3,5.. þeklinde açýlýyor. baþtaki -1 ile çaðrýlan üslü sayý fonksiyonu ise ise açýlýmdaki negatif-pozitif ayrýmýný yapmak için oluþturuldu.*/
    }

    return sonuc;

}

int main() { 

	  int derece;

	printf("bir sinus degeri giriniz:");
	scanf("%d",&derece);			/*kullanýcýdan sinüs deðeri alýndý*/



   

  printf( "%lf\n" , sint( derece * PI / 180 ) ); /*alýnan deðer radyan cinsine çevrilerek son iþlemlerin yapýldýðý sinx fonksiyonu çaðýrýlarak ekrana bastýrýldý.*/

 



	return 0;


}
