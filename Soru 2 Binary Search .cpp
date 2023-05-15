#include <stdio.h>

void selectionSort(int arr[], int n) {//Diziyi küçükten büyüðe sýralamak için selection sort'u kullanýyoruz
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;//ilk indexi minimum index olarak atýyoruz
        for (j = i+1; j < n; j++)//en küçük elemaný bulma iþlemi yapýyoruz,sýrayla arýyoruz
            if (arr[j] < arr[min_idx])//eðer ilk index sonraki aradýðýmýz indexlerden büyük olursa artýk min index küçük olarak bulduðumuz olur
                min_idx = j;
        int temp = arr[min_idx];//bulunan min indexle öncekini yer deðistiriyoruz
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {//orta elemanýn indexini bulmak
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)//eðer orta eleman aranan sayi ise o index'i geri döndürür
            return mid;
        if (arr[mid] < x)// Eðer orta eleman aranan sayýdan küçükse dizinin sað tarafýna bakýyoruz
            l = mid + 1;
        else// Eðer orta eleman aranan sayýdan büyükse dizinin sol tarafýna bakýyoruz
            r = mid - 1;
    }
    return -1;// Eðer aranan sayý dizide yoksa -1 döndürür
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);// Dizinin eleman sayýsýný hesaplýyoruz
    selectionSort(dizi, n);//Methotumuzu çaðýrarak diziyi küçükten büyüðe sýralýyoruz
    int aranan;
    printf("Aranacak degeri giriniz: ");//Aranacak sayiyi kullanýcýdan istiyoruz
    scanf("%d", &aranan);
    int sonuc = binarySearch(dizi, 0, n-1, aranan);//Mwthotumuzu çaðýrarak ikili arama iþlemi yapýyoruz
    if (sonuc == -1)//-1 döndürürse aranan sayi dizide yok demektir ve biz de bunu yazdýrýyoruz
        printf("%d sayisi dizide yok \n", aranan);
    else
        printf("%d sayisi dizide var \n", aranan);//-1 döndürmezse aranan sayi dizide var demektir
    return 0;
}

