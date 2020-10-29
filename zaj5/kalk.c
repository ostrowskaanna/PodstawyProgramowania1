#include <stdio.h>


int kalkulator(char wybor,int liczba){
    int static x=7;
    switch(wybor){
        case '+':
            printf("%d\n", x+=liczba);
        break;
        case '-':
            printf("%d\n", x-=liczba);
        break;
        case '*':
            printf("%d\n", x*=liczba);
        break;
        case '/':
            printf("%d\n", x/=liczba);
        break;
        }
}   
int main(){
    kalkulator('+',6);
    kalkulator('-',6);
    kalkulator('*',6);
    kalkulator('/',6);
return 0;
}
        
    
    
    
    
    
