#include<stdio.h>
#include<stdlib.h>


int LinearSearch( int dizi[], int size , int aranan )//Linear arama yapan bir fonkisyon tan�ml�yoruz
{
	int i;
	for(i=0; i< size ;i++)
	{
		if(aranan == dizi[i])//D�ng� yard�m�yla tek tek s�rayla ar�yoruz
		return i;//arama ba�ar�l�ysa i d�nd�r�r
	}
	return -1;//ba�ar�l� de�ilse -1 d�nd�r�r
}



int main(){
	
int size;
printf("Dizinin boyutunu giriniz: ");//Dizinin boyutunu istiyoruz
scanf("%d",&size);

int dizi[size];
int i=0;

while( i<size)
{
printf("sayi: ");//while d�g�s� yard�m�yla dizi elemanlar�n� al�yoruz.
scanf("%d",&dizi[i]);
i++;	
} 

int aranan ;
printf("Aranan sayiyi girniz:" );//aranan sayiyi istiyoruz
scanf("%d",&aranan);

int sonuc = LinearSearch(dizi , size , aranan);//Tan�mlad���m�z fonksiyonu �a��r�yoruz

if(sonuc == -1)
printf("Aranan sayi dizide yok");//arama ba�ar�l� de�ilse -1 d�nd�r�r e�er -1 d�nd�r�rse aranan sayinin dizide olmad���n� yazd�r�yoruz

else
printf("Aranan sayi dizide var");//-1 d�nd�rmezse aranan sayi dizide vard�r biz de �yle yazd�r�yoruz

	
	
	
	return 0;
}
