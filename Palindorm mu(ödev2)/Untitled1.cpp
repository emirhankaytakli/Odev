#include<stdio.h>
#include<stdlib.h>
//düðüm yapýsýný tanýmlýyoruz
struct node{
	
	int data;
	struct node *sonraki;
};

int main(){
	
struct	node* ilkdugum =NULL;
ilkdugum = (struct node*)malloc(sizeof(struct node));//Düðümlerimiz için yer ayýrýyoruz.
struct node* ikincidugum = (struct node*)malloc(sizeof(struct node));
struct node* ucuncudugum = (struct node*)malloc(sizeof(struct node));
struct node* dorduncudugum = (struct node*)malloc(sizeof(struct node));
struct node* besincidugum = (struct node*)malloc(sizeof(struct node));

ilkdugum-> data;//Düðüm yapýmýzda baþtan veriyi atýyoruz.
ilkdugum-> sonraki = ikincidugum;//Sonra da bir sonraki düðümün pointerýný.

ikincidugum -> data;
ikincidugum -> sonraki= ucuncudugum;

ucuncudugum -> data;
ucuncudugum -> sonraki= dorduncudugum;

dorduncudugum->data;
dorduncudugum->sonraki=besincidugum;

besincidugum->data;
besincidugum->sonraki=NULL;// Son düðüm hiç bir düðümü göstermiyecek diye pointer deðerine NULL atýyoruz

printf("Listeyi giriniz:(Sadece bes tane rakam giriniz)\n\n");//Kurallara uygun bir þekilde rakamlarý giriyoruz.
scanf ("%d %d %d %d %d",ilkdugum,ikincidugum,ucuncudugum,dorduncudugum,besincidugum);

if (ilkdugum->data==besincidugum->data && ikincidugum->data==dorduncudugum->data){//Palindrom þartlarýný saðlýyorsa yani 1. düðüm 5. düðümle, 2. düðüm 4. düðümle ayný ise true döndürür.
	printf("True");
	
}
else{
	printf("False");//Þartlar saðlanmýyorsa false döndürür.
}

	
	return 0;
}
