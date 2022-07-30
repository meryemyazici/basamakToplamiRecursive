#include <stdio.h>
#include <stdlib.h>

int toplam(int sayi){

    if(sayi!=0){
            return(sayi%10+toplam(sayi/10)); // sayinin 10 ile bolumunden kalan kismini yazdirip bolumu tekrar dondurerek 10 a bolup kalani yazdirdik
    }
    else{
        return 0;
    }
}

int main()
{
    int sayi;
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi); //kullanicidan sayiyi aldik
    printf("basamaklarin toplami: %d",toplam(sayi));

    return 0;
}
