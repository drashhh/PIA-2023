#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[]){
    int brojac, pomoshenBrojac =0, maxVred = 0, pozicija, brojacRed=0, pomPozicija=0;
    char red[200];
    FILE *vlez;
    if(argc != 2){
        printf("Upatstvo: ./%s <ImeNaDatoteka>.\n", argv[0]);
        return -1;
    }
    if((vlez=fopen(argv[1], "r")) == NULL){
        printf("Greshka pri citanje na programata!!!\n");
        return -1;
    }

    while((fgets(red, sizeof(red), vlez)) != NULL){
        brojac = 0;
        printf("Red %s so dolzina %d ", red, strlen(red));
        for(int i =0; red[i]!= '\0'; i++){
            if(isupper(red[i])){
                brojac++;
            }
        }
        if(brojac > maxVred){
            maxVred = brojac;
            pozicija = ftell(vlez)-strlen(red);
            pomPozicija = ftell(vlez);
        }
        printf("Pompozicija %d\n", pomPozicija);
    }
    if(maxVred > 0){
        printf("Pozicija na red > %d\n", pozicija);
        fseek(vlez, pozicija-1, SEEK_SET);
        fgets(red, sizeof(red), vlez);
        printf("Red > %s", red);
    }
    else printf("Nema golemi bukvi!");
    fclose(vlez);
    return 0;
}