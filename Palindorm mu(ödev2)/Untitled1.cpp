#include<stdio.h>
#include<stdlib.h>
//d���m yap�s�n� tan�ml�yoruz
struct node{
	
	int data;
	struct node *sonraki;
};

int main(){
	
struct	node* ilkdugum =NULL;
ilkdugum = (struct node*)malloc(sizeof(struct node));//D���mlerimiz i�in yer ay�r�yoruz.
struct node* ikincidugum = (struct node*)malloc(sizeof(struct node));
struct node* ucuncudugum = (struct node*)malloc(sizeof(struct node));
struct node* dorduncudugum = (struct node*)malloc(sizeof(struct node));
struct node* besincidugum = (struct node*)malloc(sizeof(struct node));

ilkdugum-> data;//D���m yap�m�zda ba�tan veriyi at�yoruz.
ilkdugum-> sonraki = ikincidugum;//Sonra da bir sonraki d���m�n pointer�n�.

ikincidugum -> data;
ikincidugum -> sonraki= ucuncudugum;

ucuncudugum -> data;
ucuncudugum -> sonraki= dorduncudugum;

dorduncudugum->data;
dorduncudugum->sonraki=besincidugum;

besincidugum->data;
besincidugum->sonraki=NULL;// Son d���m hi� bir d���m� g�stermiyecek diye pointer de�erine NULL at�yoruz

printf("Listeyi giriniz:(Sadece bes tane rakam giriniz)\n\n");//Kurallara uygun bir �ekilde rakamlar� giriyoruz.
scanf ("%d %d %d %d %d",ilkdugum,ikincidugum,ucuncudugum,dorduncudugum,besincidugum);

if (ilkdugum->data==besincidugum->data && ikincidugum->data==dorduncudugum->data){//Palindrom �artlar�n� sa�l�yorsa yani 1. d���m 5. d���mle, 2. d���m 4. d���mle ayn� ise true d�nd�r�r.
	printf("True");
	
}
else{
	printf("False");//�artlar sa�lanm�yorsa false d�nd�r�r.
}

	
	return 0;
}
