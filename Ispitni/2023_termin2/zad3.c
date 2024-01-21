#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[]){
    char red[200];
    char momBukva;
    int i,j,brojkaProcitana, kontrolna=0;
    FILE *vlez, *izlez;
    if(argc !=3){
        printf("Upatsvo: /%d <vlezna> <izlezna>\n", argv[0]);
        return -1;
    }
    if((vlez=fopen(argv[1], "r"))== NULL){
        printf("Ne moze da se otvori prvata datoteka!\n");
        return -1;
    }
    if((izlez=fopen(argv[2], "w")) == NULL){
        printf("Ne moze da se otvori vtorata datoteka\n");
        return -1;
    }

    while(fgets(red, sizeof(red), vlez)!= NULL){
        for(i=0; i < strlen(red); i++){
            momBukva = red[i];
            if(kontrolna == 0){
                brojkaProcitana=0;
                if(isdigit(momBukva)){
                    brojkaProcitana = momBukva - '0';
                    kontrolna = brojkaProcitana;
                }
                for(j = i+1; j < i+brojkaProcitana+1; j++)
                    fputc(red[j], izlez);
            }else{
                kontrolna--;
            }



        }
    }
    fclose(vlez);
    fclose(izlez);
    return 0;
}