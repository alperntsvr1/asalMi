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
    //çift sayilari direk eledim
    if (sayi % 2 == 0) {
        return false;
    }
    /*burda yapmak istediðim sayinin karekökünü alarak iþlem hacmini kýsýtlamak
	(mesela(kök)64=8 sýnýr 8 oldu ve sadece sekizin bölenlerini kontrol ediyorum*/
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
    
    printf("Ýlk sayýyý giriniz: ");
    scanf("%d", &ilkSayi);
    
    printf("Son sayýyý giriniz: ");
    scanf("%d", &sonSayi);
    
    printf("Asal sayýlar:\n");
    for (i = ilkSayi; i <= sonSayi; i++) {
        if (asalMi(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

