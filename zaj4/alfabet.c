#include <stdio.h>

int main()
{
    char litera;
    printf("Podaj pierwszą literę słowa:\n");
    scanf("%c", &litera);
    switch(litera){
        case 'a': case 'A': printf("anarchiści niemieccy bandyci\n");
        break;
        case 'b': case 'B': printf("bycie dziadami\n");
        break;
        case 'c': case 'C': printf("chordy pijanej młodzieży\n");
        break;
        case 'd': case 'D': printf("Donald Tusk powinien odejść i przestać się kompromitować\n");
        break;
        case 'e': case 'E': printf("egzaminy gimnazjalne\n");
        break;
        }
    return 0;
}
