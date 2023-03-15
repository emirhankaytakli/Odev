#include <stdio.h>
#include <stdlib.h>
# define elemanSayisi 6

int minBul(int sayilar[]){
     int min;
     min = sayilar[0];//1

     for(int i=0 ; i<elemanSayisi ; i++){// 1,n+1,n
          if(min > sayilar[i])//n
               min = sayilar[i];//1
     }

     return min;//1
}

int main() {
	
	 int sayilar[elemanSayisi];
	 
	  for(int i=0 ; i<elemanSayisi ; i++){// 1,n+1,n
          printf("%d. sayiyi giriniz : ",i+1);//n
          scanf("%d", &sayilar[i]);
     }
      
	  printf("Dizideki en kucuk sayi : %d", minBul(sayilar));//1
	
	


	return 0;
}
//Bu fonksiyonun zaman karmaþýklýðý T(n)=1+1+n+1+n+n+1+1+1+n+1+n+n+1=6n+8 dir.
