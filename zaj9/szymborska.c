#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    const char tekst[]="jestem kim jestem";
    const char tekst2[]="niepojęty przypadek jak każdy przypadek";
    fp = fopen ("szymborska.txt", "w");
 
    if(fp == NULL){
        printf("nie można otworzyć\n");
        exit(1);
}
    fprintf(fp, "%s\n", tekst);
    fclose (fp);
    fp = fopen ("szymborska.txt", "a");
    fprintf(fp, "%s\n", tekst2);
    fclose (fp);
    return 0;
}
