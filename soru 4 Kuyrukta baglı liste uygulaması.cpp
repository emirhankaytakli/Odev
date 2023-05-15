#include<iostream>
using namespace std;

#define SIZE 10//kuyruk boyutu

struct node{//d���m�m�z� olu�turuyoruz
	int data;
	struct node *next;
};

struct queue{//kuyruk yap�s� olu�turuyoruz
	int adet;//d���m eklendikce artar silindik�e azal�r.Ama� SIZE � a�mamak.
	struct node * front;//kuyru�un ilk d���m�
	struct node * rear;//kuyru�un son d���m�
};
void basVer(queue *q)//ba�lang�� de�erini veren fonksiyon 
{
	q-> adet =0;
	q-> rear = q->front =NULL;//ba�lang�� de�eri verilir
	
}
bool doluMu(queue * q){
	
	return (q->adet==SIZE);// dolu ya da bo� oldu�unu d�nd�r�r(true false)
	}
	bool bosMu(queue *q){
		return (q->adet ==0);//true d�nd�r�rse kuyrukta d���m olmad��� anlam�na gelir
	}
void ekle(queue *q, int key)//kuru�a eleman ekleme fonksiyonu
{//enqueue
	struct node *eleman=new node();
	eleman->data=key;
	
if(doluMu(q))//kuyru�un dolu mu oldu��n� kontrol ediyoruz
{
	cout<<"kuyruk dolu"<< endl;
	}
	else if (bosMu(q))//kuyru�un bo� mu oldu�unu kontrol ediyoruz
	{
	eleman ->next =NULL;
	q->rear = q->front =eleman;//ilk d���m� ekliyoruz
	q->adet++;//adet de�erini artt�r�yoruz
	cout<<key<<"ilk dugum olusturuldu ve kuyruga eklendi"<<endl;
	}
	else//kuyruk dolu de�il ancak bo� da de�il en az 1 eleman var
	{
	 eleman->next=q->rear;	//kuyru�un sonuna yeni gelen elaman� eklemek
	 q->rear =eleman; //g�ncelleme yap�yoruz
	 q->adet++;//adet de�erini artt�r�yoruz
	 cout<<key<<"kuyruga eleman eklendi"<<endl;
	}	
}
void sil(queue *q)
{
if(bosMu(q))//kuyru�un bo� mu oldu�u kontrol edilir
{
	cout <<"kuyruk bos,silinecek dugum yok"<<endl;
	}
	else if(q->adet ==1) //ilk d���m� silme i�lemi ger�ekle�tircez
	{
		cout<< q->front->data <<"eleman silindi,kuyrukta eleman kalmad�"<<endl;
		delete q->front;
		q->front=NULL;
		q->rear=NULL;
	}
else {
	cout<< q->front->data <<"eleman silindi"<<endl;	
	struct node *temp =q->rear;
	while(temp->next!=q->front){
		temp = temp->next;
	}
	delete q->front;//ilk d���m� siliyoruz
	q->front= temp;//g�ncelliyoruz
	q->adet--;
	
	 }
	}	
void yazdir(queue *q)//kalanlar� yazd�r�r
{
	if(bosMu(q)){
		cout<<"kuyruk bos";
	}
	else
	{
	struct node *temp =q->rear;	
	while (temp-> next !=NULL)
	{
		cout<<temp->data<<"->";
		temp =temp->next;
	}
	cout<<temp->data<<" ";
	}
}

int main(){
	
	queue qu;
	basVer(&qu);
	
	int sayi,secim;
	while(1){
		cout<<"Lutfen asagidaki islemlerden birini seciniz"<<endl;//kuyrukta hangi i�lemi yapaca��m�za g�re caseler olu�turulur
		cout<<"1.Ekleme"<< endl;
		cout<<"2.Silme"<< endl;
		cout<<"3.Goruntuleme"<<endl;
		cout<<"4.Cikis"<<endl;
		cin>>secim;
		switch(secim)
		{
			case 1: cout<<"Eklemek istediginiz degeri giriniz"; cin>>sayi;//say� ekler
			ekle(&qu,sayi);
			break;
			case 2: sil(&qu);//say� siler
			break;
			case 3:yazdir(&qu);//kuyru�u g�r�nt�ler
			case 4:cout<<"programdan ciktiniz"<<endl;//c�k�� yapar
			return 0;
			default: cout<<"hatali islem yaptiniz"<<endl;
		}
	}
	
	
	
	
	return 0;
}


