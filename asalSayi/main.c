#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool asalMi(int sayi) {
    if (sayi < 2) {
        return false;
    }
    if (sayi == 2) {
        return true;
    }
    //�ift sayilari direk eledim
    if (sayi % 2 == 0) {
        return false;
    }
    /*burda yapmak istedi�im sayinin karek�k�n� alarak i�lem hacmini k�s�tlamak
	(mesela(k�k)64=8 s�n�r 8 oldu ve sadece sekizin b�lenlerini kontrol ediyorum*/
    int sinir = (int)sqrt(sayi);
    int i;
	for ( i = 3; i <= sinir; i += 2) {
        if (sayi % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int i) {
    int ilkSayi, sonSayi;
    
    printf("�lk say�y� giriniz: ");
    scanf("%d", &ilkSayi);
    
    printf("Son say�y� giriniz: ");
    scanf("%d", &sonSayi);
    
    printf("Asal say�lar:\n");
    for (i = ilkSayi; i <= sonSayi; i++) {
        if (asalMi(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

