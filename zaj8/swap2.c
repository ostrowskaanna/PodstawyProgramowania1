#include <stdio.h>
#include <string.h>

void swapText(char *tekst1, char *tekst2){
    int length=strlen(tekst1);
    char tekst[100];
    for(int i=0;i<length;i++){
        tekst[i]=tekst1[i];
        tekst1[i]=tekst2[i];
        tekst2[i]=tekst[i];
    }
}

int main()
{
char tekst1[]="tekst1";
char tekst2[]="tekst2";
char *wsk1;
wsk1=tekst1;
char *wsk2;
wsk2=tekst2;
swapText(tekst1, tekst2);
printf("tekst 1 po zamianie: %s\n", tekst1);
printf("tekst 2 po zamianie: %s\n", tekst2);
return 0;
}
