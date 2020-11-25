#include <stdio.h>

    
    struct czlowiek{
        char imie[100]; 
        int waga; 
        int promile;
    };
    
void odplyneli(int *promile1, int *promile2, int *promile3){
    int licznik=0;
   if(*promile1>2) licznik++;
   if(*promile2>2) licznik++;
   if(*promile3>2) licznik++;
   printf("Liczba osób, które odpłynęły:%d\n", licznik);
    }
    
int main(){
    struct czlowiek czlowiek1;
    struct czlowiek czlowiek2;
    struct czlowiek czlowiek3;
    czlowiek1.imie=="Marcin";
    czlowiek1.waga=70;
    czlowiek1.promile=4;
    czlowiek1.imie=="Piotr";
    czlowiek2.waga=60;
    czlowiek2.promile=3;
    czlowiek3.imie=="Adam";
    czlowiek3.waga=65;
    czlowiek3.promile=2;
    int *wsk1;
    wsk1=&czlowiek1.promile;
    int *wsk2;
    wsk2=&czlowiek2.promile;
    int *wsk3;
    wsk3=&czlowiek3.promile;
    odplyneli(&czlowiek1.promile, &czlowiek2.promile, &czlowiek3.promile);
    return 0;
}
