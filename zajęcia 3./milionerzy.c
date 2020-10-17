#include <stdio.h>

int main()
{
    int odp;
    int a;
    
    printf("Pytanie za 1000pln: jak nazywa się premier Polski? \n 1 Morawiecki \n 2 Duda \n 3 Kaczyński \n 4 Szumowski \n");
    scanf("%d", &odp);
    switch(odp)
    {
        case 1: printf("Wygrałeś 1000pln \n");
        printf("Pytanie za 40 000pln: ile jest krajów na świecie? \n 1 190 \n 2 195 \n 3 200 \n 4 205 \n");
        scanf("%d", &odp);
        switch(odp)
        {
            case 2: printf("Wygrałeś 40 000pln \n");
            printf("Pytanie za 1 000 000pln: ile dni trwa Chanuka? \n 1 6dni\n 2 7dni \n 3 8dni \n 4 9dni \n");
            scanf("%d", &odp);
            switch(odp)
            {
                case 3: printf("Wygrałeś 1 000 000pln \n");
                break;
                default: printf("Zła odpowiedź, wygrałeś gwarantowane 40 000pln \n");
                break;
            }
            break;
            default: printf("Zła odpowiedź, wygrałeś gwarantowane 1000pln \n");
            break;
        }
        break;
        default: printf("Zła odpowiedź, wygrałeś 0pln \n");
        break; 
    }
    
return 0;
}
