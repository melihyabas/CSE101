
/*Melih Yabaş  161044072*/


#include<stdio.h>
int main(){
	int guncel,hedef;
/*Güncel hız ve hedef hız değişkenlerini oluşturdum.*/
	


	printf("Guncel hizi giriniz:\n");
	scanf("%d",&guncel);
	
	printf("Hedef hizi giriniz:\n");
	scanf("%d",&hedef);
	
/*Güncel hız ve hedef hız değerlerini kullanıcıdan almak için printf ve scanf kullandım.*/
	printf("guncel hiz:%d\n",guncel);
	printf("hedef hiz:%d\n",hedef);
/*Kullanıcıdan alınan güncel hız ve hedef hız değerlerini ekrana bastırmak için tekrar printf kullandım.*/

	if (guncel>hedef){
		printf("Hiziniz hedef hizdan yuksektir\n");	
	}
/*Güncel hız hedef hızdan büyükse bunu ekrana yazdırmayı if ve printf kullanarak sağladım.*/


	else{
		while(guncel<=hedef){
		
			printf("%d\n",guncel);
			guncel++;
		}
	}
/*hedef hız güncel hızdan büyükse güncel hızı hedef hıza ulaştırmak için else içinde for döngüsü oluşturarak güncel hızın artırılmasını sağladım ve her aşamada güncel hızı görmek için bunu printf ile ekrana bastırdım.*/




	return 0;
}
