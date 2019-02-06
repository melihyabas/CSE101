#include <stdio.h>
#include <stdlib.h>        /*Rastgele sayý üretmek, ve genel printf, scanf gibi fonsiyonlarý kullanmak için gerekli kütüphaneler oluþturuldu.*/
#include <time.h>

void rekabet(double ciko[]){
    
    int sayacM=0;
    int sayacA=0;
    int i=0,j=5,k,l;

    while( !(ciko[0]<=0 && ciko[1]<=0 && ciko[2]<=0&&ciko[3]<=0 && ciko[4]<=0 && ciko[5]<=0)  && i!=j)
    {
        /*    Mehmet için*/        
        ciko[i]-=1;
        
        if(ciko[i]==0){
            sayacM++;
            l=i;
            i++;
        }
    
        /*    Ayþe için*/
        ciko[j]-=0.5;
        
        if(ciko[j]==0){
            sayacA++;
            k=j;
            j--;
        }
    
    }
    
    if(k==j)    
        sayacA++;
    else if(l==i)
        sayacM++;
    else if(i==j)
        sayacM++;        
    printf("Mehmet:%d \nAyse:%d \n",sayacM,sayacA);
    
    if(sayacA>sayacM)
        printf("Ayse Kazandi\n");
    else if(sayacA<sayacM)
        printf("Mehmet Kazandi\n");
    else
        printf("Berabere\n");    
}

void rastcikolata(double cikolatalar[],int cikolatasayi){
    
    int i;
    
    srand(time(NULL));    /*Rastgele sayý fonksiyonu oluþturuldu.*/    
    for(i=0;i<cikolatasayi;i++){    
        cikolatalar[i]=rand()%10+1;
        printf("%lf\t",cikolatalar[i]);
    }

    printf("\n");
    rekabet(cikolatalar);
}
void test(){
	
	int i;
	int cikolatasayi=6;
	double cikolatalar[6]={0};
	rastcikolata(cikolatalar,cikolatasayi);
	
	
}
int main() {

	test();
    return 0;
}
