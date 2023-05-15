#include<iostream>
using namespace std;

#define SIZE 10//kuyruk boyutu

struct node{//düðümümüzü oluþturuyoruz
	int data;
	struct node *next;
};

struct queue{//kuyruk yapýsý oluþturuyoruz
	int adet;//düðüm eklendikce artar silindikçe azalýr.Amaç SIZE ý aþmamak.
	struct node * front;//kuyruðun ilk düðümü
	struct node * rear;//kuyruðun son düðümü
};
void basVer(queue *q)//baþlangýç deðerini veren fonksiyon 
{
	q-> adet =0;
	q-> rear = q->front =NULL;//baþlangýç deðeri verilir
	
}
bool doluMu(queue * q){
	
	return (q->adet==SIZE);// dolu ya da boþ olduðunu döndürür(true false)
	}
	bool bosMu(queue *q){
		return (q->adet ==0);//true döndürürse kuyrukta düðüm olmadýðý anlamýna gelir
	}
void ekle(queue *q, int key)//kuruða eleman ekleme fonksiyonu
{//enqueue
	struct node *eleman=new node();
	eleman->data=key;
	
if(doluMu(q))//kuyruðun dolu mu olduðýný kontrol ediyoruz
{
	cout<<"kuyruk dolu"<< endl;
	}
	else if (bosMu(q))//kuyruðun boþ mu olduðunu kontrol ediyoruz
	{
	eleman ->next =NULL;
	q->rear = q->front =eleman;//ilk düðümü ekliyoruz
	q->adet++;//adet deðerini arttýrýyoruz
	cout<<key<<"ilk dugum olusturuldu ve kuyruga eklendi"<<endl;
	}
	else//kuyruk dolu deðil ancak boþ da deðil en az 1 eleman var
	{
	 eleman->next=q->rear;	//kuyruðun sonuna yeni gelen elamaný eklemek
	 q->rear =eleman; //güncelleme yapýyoruz
	 q->adet++;//adet deðerini arttýrýyoruz
	 cout<<key<<"kuyruga eleman eklendi"<<endl;
	}	
}
void sil(queue *q)
{
if(bosMu(q))//kuyruðun boþ mu olduðu kontrol edilir
{
	cout <<"kuyruk bos,silinecek dugum yok"<<endl;
	}
	else if(q->adet ==1) //ilk düðümü silme iþlemi gerçekleþtircez
	{
		cout<< q->front->data <<"eleman silindi,kuyrukta eleman kalmadý"<<endl;
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
	delete q->front;//ilk düðümü siliyoruz
	q->front= temp;//güncelliyoruz
	q->adet--;
	
	 }
	}	
void yazdir(queue *q)//kalanlarý yazdýrýr
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
		cout<<"Lutfen asagidaki islemlerden birini seciniz"<<endl;//kuyrukta hangi iþlemi yapacaðýmýza göre caseler oluþturulur
		cout<<"1.Ekleme"<< endl;
		cout<<"2.Silme"<< endl;
		cout<<"3.Goruntuleme"<<endl;
		cout<<"4.Cikis"<<endl;
		cin>>secim;
		switch(secim)
		{
			case 1: cout<<"Eklemek istediginiz degeri giriniz"; cin>>sayi;//sayý ekler
			ekle(&qu,sayi);
			break;
			case 2: sil(&qu);//sayý siler
			break;
			case 3:yazdir(&qu);//kuyruðu görüntüler
			case 4:cout<<"programdan ciktiniz"<<endl;//cýkýþ yapar
			return 0;
			default: cout<<"hatali islem yaptiniz"<<endl;
		}
	}
	
	
	
	
	return 0;
}


