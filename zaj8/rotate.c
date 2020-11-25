#include <stdio.h>

int rotate(int *a, int *b, int *c){
    int p;
    p=*c;
    *c=*b;
    *b=*a;
    *a=p;
}
    
int main(){
    int a=1,b=2,c=3;
    int *wsk1;
    wsk1=&a;
    int *wsk2;
    wsk2=&b;
    int *wsk3;
    wsk3=&c;
    rotate(&a,&b,&c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
