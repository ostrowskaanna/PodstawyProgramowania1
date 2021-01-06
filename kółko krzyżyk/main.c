#include <stdio.h>
#include <stdlib.h>
#include "rysuj.c"
#include "ruch.c"

int wygrana(char pole[5][5])
{
      int stan_gry = 0;  
      int i,j;
  for(i=0; i<5; i++){ 
    if(pole[i][0]==pole[i][1] && pole[i][0]==pole[i][2] && pole[i][0]==pole[i][3] && pole[i][0]==pole[i][4] && pole[i][0] != '-')
        stan_gry = 1;
    if(pole[0][i]==pole[1][i] && pole[0][i]==pole[2][i] && pole[0][i]==pole[3][i] && pole[0][i]==pole[4][i] && pole[0][i] != '-') 
        stan_gry = 1;
    }
  if(pole[0][0]==pole[1][1] && pole[0][0]==pole[2][2] && pole[0][0]==pole[3][3] && pole[0][0]==pole[4][4] && pole[0][0] != '-')
      stan_gry = 1;
  if(pole[0][4]==pole[1][3] && pole[0][4]==pole[2][2] && pole[0][4]==pole[3][1] && pole[0][4]==pole[4][0] && pole[0][4] != '-' )
      stan_gry = 1;

  return stan_gry;    
}

int main()
{
    char pole[5][5]= { '-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
    int koniec = 0;
    int licznik = 0;
    rysuj(pole);
    while(wygrana(pole) == 0 && licznik != 25){
        ruch_kolko(pole);
        licznik+=1;
        if(wygrana(pole) == 0 && licznik != 25){
            rysuj_nowe(pole);
            ruch_krzyzyk(pole);
            licznik+=1;
            rysuj_nowe(pole);
        }
    }
    if(wygrana(pole) == 1){
        rysuj_nowe(pole);
        printf("Wygrałeś!\n");
    }
    if(wygrana(pole) == 0 && licznik == 25){
        rysuj_nowe(pole);
        printf("Remis\n");
    }
    return 0;
}
