#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>

int nagroda = 0;
int licznik = 0;
char poprawna;
int gwarantowane = 0;
    int publicznosc = 1;
    int pol = 1;
    int telefon = 1;
    int* publicznoscWsk = &publicznosc;
    int* polWsk = &pol;
    int* telefonWsk = &telefon;

char koloRatunkowe(int* publicznosc, int* pol, int* telefon) {
    char kolo;
    char odp2;
    printf("\tKOLO RATUNKOWE!\n");
    printf("Wybrales opcje kola ratunkowego\n");
    printf("Wybierz, ktora pomoc cie interesuje:\n");
    if(*publicznosc == 1){
        printf("p -pomoc publicznosci\n");
    }
    if(*pol == 1){
        printf("t -telefon do przyjaciela\n");
    }
    if(*pol == 0 && *publicznosc ==0){
        printf("Wykorzystales wszystkie kola\n");
        printf("Zeby grac dalej wcisnij 'n'\nZeby zrezygnowac teraz wcisnij 'q'\n");
    }
    while(kolo != 'q' && kolo != 'p' && kolo != 't' && kolo != 'n'){
    scanf("%s", &kolo);
    if(kolo != 'q' && kolo != 'p' && kolo != 't' && kolo != 'n'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    if(kolo == 'q') {
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    if (kolo == 'p'){
        *publicznosc = 0;
        printf("\nWedlug publicznosci poprawna odpowiedzia jest:\n%c\n", poprawna);
    }
        if(kolo == 't'){
            *pol = 0;
            printf("\nWedlug mnie poprawna odpowiedzia jest:\n%c\n", poprawna);
    }
    }
    printf("\nJaka jest twoja odpowiedz?\n");
    while(odp2 != 'a' && odp2 != 'b' && odp2 != 'c' && odp2 != 'd'){
    scanf("%s", &odp2);
    if(odp2 != 'a' && odp2 != 'b' && odp2 != 'c' && odp2 != 'd'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    }
    return odp2;
}

void sprawdz(char gracz)
{
    if(gracz==poprawna) {
        nagroda += 10000;
        PlaySound(TEXT("C:\\Users\\anaos\\Desktop\\studia\\pp\\milionerzy\\correct answer.wav"), NULL, SND_SYNC);
        printf("\n%c to poprawna odpowiedz!\n", gracz);
        sleep(2);
        if (licznik != 6) {
            printf("\nGratuluje, wygrales %d\n", nagroda);
            sleep(2);
            printf("\nNastepne pytanie:\n");
            sleep(2);
        } else if (licznik == 6) {
            printf("Gratuluje\nWygrales MILION!\n");
        }
    }
        else {
            PlaySound(TEXT("C:\\Users\\anaos\\Desktop\\studia\\pp\\milionerzy\\wrong answer.wav"), NULL, SND_SYNC);
            printf("\n%c to nie jest poprawna odpowiedz\n", gracz);
            sleep(2);
            if(licznik == 1){
                printf("Niestety nic nie wygrales :(\n");
                sleep(2);
            }
            else {
                printf("\nWygrales gwarantowane %dPLN\n", gwarantowane);
            }
            exit(1);
        }
}

int main() {

    char odp;

    printf("Witaj w grze MILIONERZY!\n");
    printf("\nZagrajmy o MILION!\n");
    for (int i = 0; i < 120; i++) {
        printf("*");
    }

    PlaySound(TEXT("C:\\Users\\anaos\\Desktop\\studia\\pp\\milionerzy\\intro.wav"), NULL, SND_SYNC);

    printf("\nZASADY GRY sa nastepujace:\n");
    printf("Gra sklada sie z 6 pytan abcd\n");
    printf("W ciagu calej gry przysluguja ci 2 kola ratunkowe:\np-pomoc publicznosci\noraz\nt-telefon do przyjaciela\n");
    printf("\nJesli bedziesz chcial skorzystac z kola ratunkowe-zamiast odpowiedzi wpisz litere 'k'\n");
    printf("Jesli chcesz zrezygnowac z gry i zabrac do tej pory zdobyte pieniadze- wcisnij przycisk 'q'\n");
    printf("Gwarantowane kwoty:\npo 1.pytaniu- 1000PLN\npo 3.pytaniu- 10000PLN\ndalej grasz na wlasna odpowiedzialnosc\n");
    for (int i = 0; i < 120; i++) {
        printf("*");
    }
    sleep(2);
    printf("\nWszystko jasne? To gramy o MILION!\n");
    sleep(5);
    printf("\nPierwsze pytanie:\n");
    sleep(2);

    printf("\n1. Ile jest panstw na swiecie?\n");
    printf("A. 192\tB. 193\nC. 194\tD. 195\n");
    poprawna = 'c';
    licznik++;
    gwarantowane=1000;
    while(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
    scanf("%s", &odp);
    if(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    else if(odp == 'a' || odp == 'b' || odp == 'c' || odp == 'd'){
        sprawdz(odp);
    }
    else if(odp == 'q'){
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    else if(odp == 'k'){
        odp = koloRatunkowe(publicznoscWsk, polWsk, telefonWsk);
        sprawdz(odp);
    }
    }
    printf("\n2. W ktorym roku umarl Jan Pawel II?\n");
    printf("A. 1999\tB. 2004\nC. 2005\tD. 2007\n");
    poprawna = 'b';
    licznik++;
    while(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
    scanf("%s", &odp);
    if(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    if(odp == 'a' || odp == 'b' || odp == 'c' || odp == 'd'){
            sprawdz(odp);
    }
    else if(odp == 'q'){
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    else if(odp == 'k'){
            odp = koloRatunkowe(publicznoscWsk, polWsk, telefonWsk);
            sprawdz(odp);
    }
    }
    printf("\n3. W ktorym kraju obowiazuje kara smierci?\n");
    printf("A. Kanada\tB. Stany Zjednoczone\nC. Chiny\tD. Rosja\n");
    poprawna = 'b';
    licznik++;
    gwarantowane=10000;
    while(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
    scanf("%s", &odp);
    if(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    if(odp == 'a' || odp == 'b' || odp == 'c' || odp == 'd'){
            sprawdz(odp);
    }
    else if(odp == 'q'){
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    else if(odp == 'k'){
            odp = koloRatunkowe(publicznoscWsk, polWsk, telefonWsk);
            sprawdz(odp);
    }
    }
    printf("\n4. Ktory ssak jest najwiekszy?\n");
    printf("A. wieloryb\tB. slon\nC. hipopotam\tD. pletwal blekitny\n");
    poprawna = 'd';
    licznik++;
    while(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
    scanf("%s", &odp);
    if(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    if(odp == 'a' || odp == 'b' || odp == 'c' || odp == 'd'){
        sprawdz(odp);
    }
    else if(odp == 'q'){
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    else if(odp == 'k') {
        odp = koloRatunkowe(publicznoscWsk, polWsk, telefonWsk);
        sprawdz(odp);
    }
    }
    printf("\n5. W ktorym roku Neil Armstrong wyladowal na ksiezycu?\n");
    printf("A. 1959\tB. 1964\nC. 1969\tD. 1974\n");
    poprawna = 'c';
    licznik++;
    while(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
    scanf("%s", &odp);
    if(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    if(odp == 'a' || odp == 'b' || odp == 'c' || odp == 'd'){
        sprawdz(odp);
    }
    else if(odp == 'q'){
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    else if (odp == 'k'){
        odp = koloRatunkowe(publicznoscWsk, polWsk, telefonWsk);
        sprawdz(odp);
    }
    }
    printf("UWAGA\nOto pytanie za MILION:\n");
    printf("\n6. Jaki jest najlzejszy pierwiastek chemiczny?\n");
    printf("A. wodor\tB. wegiel\nC. aluminium\tD. brom\n");
    poprawna = 'a';
    licznik++;
    nagroda= 1000000;
    while(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
    scanf("%s", &odp);
    if(odp != 'a' && odp != 'b' && odp != 'c' && odp != 'd' && odp != 'q' && odp != 'k'){
        printf("zly przycisk\nwybierz ponownie\n");
    }
    if(odp == 'a' || odp == 'b' || odp == 'c' || odp == 'd'){
        sprawdz(odp);
    }
    else if(odp == 'q'){
        printf("\tREZYGNACJA\n\nWygrales %dPLN\nDziekujemy za udzial w programie!\n", nagroda);
        exit(1);
    }
    else if (odp == 'k'){
        odp = koloRatunkowe(publicznoscWsk, polWsk, telefonWsk);
        sprawdz(odp);
    }
    }
    printf("Koniec gry!\nGratuluje wygranej!\n");
    return 0;
}
