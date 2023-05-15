#include<stdio.h>
#include<stdlib.h>


int LinearSearch( int dizi[], int size , int aranan )//Linear arama yapan bir fonkisyon tanýmlýyoruz
{
	int i;
	for(i=0; i< size ;i++)
	{
		if(aranan == dizi[i])//Döngü yardýmýyla tek tek sýrayla arýyoruz
		return i;//arama baþarýlýysa i döndürür
	}
	return -1;//baþarýlý deðilse -1 döndürür
}



int main(){
	
int size;
printf("Dizinin boyutunu giriniz: ");//Dizinin boyutunu istiyoruz
scanf("%d",&size);

int dizi[size];
int i=0;

while( i<size)
{
printf("sayi: ");//while dögüsü yardýmýyla dizi elemanlarýný alýyoruz.
scanf("%d",&dizi[i]);
i++;	
} 

int aranan ;
printf("Aranan sayiyi girniz:" );//aranan sayiyi istiyoruz
scanf("%d",&aranan);

int sonuc = LinearSearch(dizi , size , aranan);//Tanýmladýðýmýz fonksiyonu çaðýrýyoruz

if(sonuc == -1)
printf("Aranan sayi dizide yok");//arama baþarýlý deðilse -1 döndürür eðer -1 döndürürse aranan sayinin dizide olmadýðýný yazdýrýyoruz

else
printf("Aranan sayi dizide var");//-1 döndürmezse aranan sayi dizide vardýr biz de öyle yazdýrýyoruz

	
	
	
	return 0;
}
