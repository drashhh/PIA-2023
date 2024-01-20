#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[]){
    char red[80];
    FILE *vlez;
    int brojRed=0, i, brojacMali=0, minBrMali=81, minRed;
    int dolzNaRed;
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
            dolzNaRed = ftell(vlez) - strlen(red) - 1;
        }

        printf("Pozicija na red %d i broj na mali bukvi %d\n", ftell(vlez), brojacMali);
    }
    printf("\nPozicija na red %d\n", dolzNaRed);
    fseek(vlez, dolzNaRed, SEEK_SET);
    fgets(red, sizeof(red), vlez);
    printf("Redot so najmalku mali bukvi e %d i ima %d mali bukvi.\n", minRed, minBrMali);
    printf("Redot e %s\n", red);
    return 0;
}