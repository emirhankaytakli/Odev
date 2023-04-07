#include <stdio.h>

int main(){
	
	/*123
	  456
	  789*/
	
int matris[3][3]= {{1,2,3},{4,5,6},{7,8,9}}	;// ilk olarak soldan saða ve yukarýdan aþaðýya artan bir matris tanýmladýk.
	
int sayi,bulundu=0,satir,sutun;//Aranacak sayiyi,satýr ve sütunu tanýmlýyoruz.
// Bir bulundu deðeri tanýmlayýp 0'a eþitliyoruz.
printf("Dizide aradiginiz sayi nedir :");//Aranacak olan sayiyi istiyoruz
scanf("%d",&sayi);
int i,j;// for döngüsü için i ve j tanýmlanýr.
for( i=0;i<3;i++){
	for(j=0;j<3;j++){
		if(matris[i][j]==sayi){// 2 tane for döngüsüyle aradýðýmýz sayýnýn matristeki indisine eþit olup olmadýðýný kontrol ediyoruz
			bulundu = 1;//Bulundunun 1'e eþit olduðunda sayi bulunmuþ demektir.
			satir=i+1;  //Bulduðumuz i. indisi 1 arttýrýrýz çünkü indis 0 dan baþlar                           
			sutun=j+1;	//Bulduðumuz j. indisi 1 arttýrýrýz çünkü indis 0 dan baþlar						   
			break;								   
		}
	}
}	
	 if(bulundu == 1)
	 printf("%d sayisi matrisin %d.satiri ve %d.sutununda bulunur.",sayi,satir,sutun);//Sayinin hangi satýr ve sütunda olduðunu belirtiriz.
	else 
        printf("%d sayisi dizide yok.",sayi);//Farkli bir sayi girdðimizde bu yazdirilir.
	
	
	return 0;
}
