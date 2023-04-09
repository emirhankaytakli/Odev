#include <stdio.h>
#include <stdlib.h>
#include<string.h>

	struct Kisi{
	char ad[20];
	char soyad[30];
	int no;
	char adres[30];
	
};

int main() {
	//deðþiken tanýmlama
struct Kisi kisi1,kisi2,kisi3,kisi4,kisi5;
//deðer atama	
strcpy(kisi1.ad,"Emirhan");	
strcpy(kisi1.soyad,"Kaytakli");
kisi1.no=20;
strcpy(kisi1.adres,"Tekirdag");

printf("Ad: %s  Soyad:  %s  No: %d  Adres: %s",kisi1.ad,kisi1.soyad,kisi1.no,kisi1.adres);

printf("\n");

strcpy(kisi2.ad,"Kemal ");	
strcpy(kisi2.soyad,"Ayazma");
kisi2.no=25;
strcpy(kisi2.adres,"Istanbul");

printf("Ad: %s  Soyad:  %s  No: %d  Adres: %s",kisi2.ad,kisi2.soyad,kisi2.no,kisi2.adres);

printf("\n");

strcpy(kisi3.ad,"Sinan ");	
strcpy(kisi3.soyad,"Yilmaz");
kisi3.no=23;
strcpy(kisi3.adres,"Bursa");

printf("Ad: %s  Soyad:  %s  No: %d  Adres: %s",kisi3.ad,kisi3.soyad,kisi3.no,kisi3.adres);

printf("\n");

strcpy(kisi4.ad,"Dilara");	
strcpy(kisi4.soyad,"Bozkurt");
kisi4.no=19;
strcpy(kisi4.adres,"Edirne");

printf("Ad: %s  Soyad:  %s  No: %d  Adres: %s",kisi4.ad,kisi4.soyad,kisi4.no,kisi4.adres);

printf("\n");

strcpy(kisi5.ad,"Mekike ");	
strcpy(kisi5.soyad,"Bayindir");
kisi5.no=21;
strcpy(kisi5.adres,"Izmir");

printf("Ad: %s  Soyad:  %s  No: %d  Adres: %s",kisi5.ad,kisi5.soyad,kisi5.no,kisi5.adres);

	
	
	
	
	
	return 0;
}
