#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[]){
    char red[80];
    FILE *vlez;
    int brojRed=0, i, brojacMali=0, minBrMali=81, minRed;

    if(argc!=2){
        printf("Upatsvo za koristenje > %s <vlezna_datoteka> \n", argv[0]);
        return -1;
    }
    if((vlez=fopen(argv[1], "r"))== NULL){
        printf("Ima greska pri vcituvanje na programata!\n");
        return -1;
    }
    while(fgets(red, sizeof(red), vlez) != NULL){
        brojRed++;
        brojacMali=0;
        for(i=0; red[i] != '\n'; i++){
            if(islower(red[i])){
                brojacMali++;
            }
        }
        if(brojacMali < minBrMali){
            minBrMali = brojacMali;
            minRed = brojRed;
        }
    }

    return 0;
}