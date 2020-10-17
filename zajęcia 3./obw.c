#include <stdio.h>

int main()
{
    int a,b,c,wybor;
    printf("wybierz 1=kwadrat/2=prostokat/3=trojkat \n");
    scanf("%d", &wybor);
    switch(wybor)
    {
        case 1: printf("podaj długość boku \n");
        scanf("%d", &a);
        printf("obwód to %d \n", 4*a);
        break;
        case 2: printf("podaj długości boków \n");
        scanf("%d %d", &a, &b);
        printf("obwód to %d \n", 2*a+2*b);
        break;
        case 3: printf("podaj długości boków \n");
        scanf("%d %d %d", &a, &b, &c);
        printf("obwód to %d \n", a+b+c);
        break;
    }
    return 0;
}
