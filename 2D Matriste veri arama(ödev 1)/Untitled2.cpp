#include <stdio.h>

int main(){
	
	/*123
	  456
	  789*/
	
int matris[3][3]= {{1,2,3},{4,5,6},{7,8,9}}	;// ilk olarak soldan sa�a ve yukar�dan a�a��ya artan bir matris tan�mlad�k.
	
int sayi,bulundu=0,satir,sutun;//Aranacak sayiyi,sat�r ve s�tunu tan�ml�yoruz.
// Bir bulundu de�eri tan�mlay�p 0'a e�itliyoruz.
printf("Dizide aradiginiz sayi nedir :");//Aranacak olan sayiyi istiyoruz
scanf("%d",&sayi);
int i,j;// for d�ng�s� i�in i ve j tan�mlan�r.
for( i=0;i<3;i++){
	for(j=0;j<3;j++){
		if(matris[i][j]==sayi){// 2 tane for d�ng�s�yle arad���m�z say�n�n matristeki indisine e�it olup olmad���n� kontrol ediyoruz
			bulundu = 1;//Bulundunun 1'e e�it oldu�unda sayi bulunmu� demektir.
			satir=i+1;  //Buldu�umuz i. indisi 1 artt�r�r�z ��nk� indis 0 dan ba�lar                           
			sutun=j+1;	//Buldu�umuz j. indisi 1 artt�r�r�z ��nk� indis 0 dan ba�lar						   
			break;								   
		}
	}
}	
	 if(bulundu == 1)
	 printf("%d sayisi matrisin %d.satiri ve %d.sutununda bulunur.",sayi,satir,sutun);//Sayinin hangi sat�r ve s�tunda oldu�unu belirtiriz.
	else 
        printf("%d sayisi dizide yok.",sayi);//Farkli bir sayi gird�imizde bu yazdirilir.
	
	
	return 0;
}
