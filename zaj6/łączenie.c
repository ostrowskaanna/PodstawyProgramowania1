#include <stdio.h>
#include <string.h>

int funkcja(char imie[100], int liczba)
{
    char liczba2[100];
    char tekst[100];
    sprintf(liczba2,"%d",liczba);
    strcat(tekst, imie);
    strcat(tekst, liczba2);
    printf("%s\n",tekst);
}
int main()
{
    funkcja("Ania",100);
    return 0;
}
