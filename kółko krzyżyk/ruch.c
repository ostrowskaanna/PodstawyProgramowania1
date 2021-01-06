#include <stdio.h>
#include <stdlib.h>

int ruch_kolko(char pole[5][5])
{
    int x,y;
    printf("Podaj współrzędne gdzie chcesz postawić kółko (kolumna wiersz)\n");
    scanf("%d %d", &x, &y);
    x--;
    y--;
    if(pole[x][y] != '-' && x<5 && y<5){
        while(pole[x][y] != '-' && x<5 && y<5){
            printf("To pole jest zajęte, podaj inne współrzędne\n");
            scanf("%d %d", &x, &y);
            x--;
            y--;
        }
        pole[x][y]='o';
    }
    if(x>4 || y>4){
        while(x>4 || y>4){
            printf("Nie ma takiego pola, podaj poprawne współrzędne\n");
            scanf("%d %d", &x, &y);
            x--;
            y--;
        }
        if(pole[x][y] != '-' && x<5 && y<5){
            while(pole[x][y] != '-' && x<5 && y<5){
                printf("To pole jest zajęte, podaj inne współrzędne\n");
                scanf("%d %d", &x, &y);
                x--;
                y--;
            }
            pole[x][y]='o';
        }
    }
    pole[x][y]='o';
}

int ruch_krzyzyk(char pole[5][5])
{
    int x,y;
    printf("Podaj współrzędne gdzie chcesz postawić krzyżyk (kolumna wiersz)\n");
    scanf("%d %d", &x, &y);
    x--;
    y--;
    if(pole[x][y] != '-' && x<5 && y<5){
        while(pole[x][y] != '-' && x<5 && y<5){
            printf("To pole jest zajęte, podaj inne współrzędne\n");
            scanf("%d %d", &x, &y);
            x--;
            y--;
        }
        pole[x][y] = 'x';
    }
    if(x>4 || y>4){
        while(x>4 || y>4){
            printf("Nie ma takiego pola, podaj poprawne współrzędne\n");
            scanf("%d %d", &x, &y);
            x--;
            y--;
        }
    if(pole[x][y] != '-' && x<5 && y<5){
        while(pole[x][y] != '-' && x<5 && y<5){
            printf("To pole jest zajęte, podaj inne współrzędne\n");
            scanf("%d %d", &x, &y);
            x--;
            y--;
        }
        pole[x][y] = 'x';
    }
    }
    pole[x][y] = 'x';
}
