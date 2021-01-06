#include <stdio.h>
#include <stdlib.h>

int rysuj(char tab[5][5])
{
    printf("   1  2  3  4  5\n");
    printf("  ---------------\n");
    for(int i=0; i<5; i++){
        printf("%d|", i+1);
        for(int j=0; j<5; j++){
            printf(" %c ", tab[i][j]);
        }
        printf("\n");
    }
}

int rysuj_nowe(char pole[5][5])
{
    printf("   1  2  3  4  5\n");
    printf("  ---------------\n");
    for(int i=0; i<5; i++){
        printf("%d| %c  %c  %c  %c  %c\n",i+1, pole[0][i], pole[1][i], pole[2][i], pole[3][i], pole[4][i]);
    }
    printf("\n");
}
 
