#include <stdio.h>
#include <string.h>

int swap( int *a, int *b){
    int p;
    p=*a;
    *a=*b;
    *b=p;
}
int main(){
int a=10;
int b=20;
int *wsk1;
wsk1=&a;
int *wsk2;
wsk2=&b;
swap(&a, &b);
printf("zamienione %d %d \n", a, b);
return 0;
}
