#include <stdio.h>

void selectionSort(int arr[], int n) {//Diziyi k���kten b�y��e s�ralamak i�in selection sort'u kullan�yoruz
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;//ilk indexi minimum index olarak at�yoruz
        for (j = i+1; j < n; j++)//en k���k eleman� bulma i�lemi yap�yoruz,s�rayla ar�yoruz
            if (arr[j] < arr[min_idx])//e�er ilk index sonraki arad���m�z indexlerden b�y�k olursa art�k min index k���k olarak buldu�umuz olur
                min_idx = j;
        int temp = arr[min_idx];//bulunan min indexle �ncekini yer de�istiriyoruz
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {//orta eleman�n indexini bulmak
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)//e�er orta eleman aranan sayi ise o index'i geri d�nd�r�r
            return mid;
        if (arr[mid] < x)// E�er orta eleman aranan say�dan k���kse dizinin sa� taraf�na bak�yoruz
            l = mid + 1;
        else// E�er orta eleman aranan say�dan b�y�kse dizinin sol taraf�na bak�yoruz
            r = mid - 1;
    }
    return -1;// E�er aranan say� dizide yoksa -1 d�nd�r�r
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);// Dizinin eleman say�s�n� hesapl�yoruz
    selectionSort(dizi, n);//Methotumuzu �a��rarak diziyi k���kten b�y��e s�ral�yoruz
    int aranan;
    printf("Aranacak degeri giriniz: ");//Aranacak sayiyi kullan�c�dan istiyoruz
    scanf("%d", &aranan);
    int sonuc = binarySearch(dizi, 0, n-1, aranan);//Mwthotumuzu �a��rarak ikili arama i�lemi yap�yoruz
    if (sonuc == -1)//-1 d�nd�r�rse aranan sayi dizide yok demektir ve biz de bunu yazd�r�yoruz
        printf("%d sayisi dizide yok \n", aranan);
    else
        printf("%d sayisi dizide var \n", aranan);//-1 d�nd�rmezse aranan sayi dizide var demektir
    return 0;
}

