#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool asalMi(int sayi) {
    if (sayi < 2) {
        return false;
    }
    if (sayi == 2 || sayi==3) {
        return true;
    }
    //çift sayilari ve 3 e bölünleri eledim
    if (sayi % 2 == 0|| sayi%3==0) {
        return false;
    }
    /*burda yapmak istediğim sayinin karekökünü alarak işlem hacmini kısıtlamak
	(mesela(kök)64=8 sınır 8 oldu ve sadece sekizin bölenlerini kontrol ediyorum*/
    int sinir=(int)sqrt(sayi);
    int i;
    for(i=5;i<=sinir;i+=6){
    	if(sayi%i==0|| sayi%(i+2)==0){
    		return false;
		}
	}
	
    return true;
}

int main(int i) {
    int ilkSayi, sonSayi;
    
    printf("İlk sayıyı giriniz: ");
    scanf("%d", &ilkSayi);
    
    printf("Son sayıyı giriniz: ");
    scanf("%d", &sonSayi);
    
    printf("Asal sayılar:\n");
    for (i = ilkSayi; i <= sonSayi; i++) {
        if (asalMi(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
