#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    int chas, minuti, maxChas=0, maxMinuti=0;
    int brojChas, brojMin;
    char recenica[100];
    printf("Vnesi ja tekstualnata niza > ");
    fgets(recenica, sizeof(recenica), stdin);
    printf("REcenica > %s", recenica);
    for(int i =0; i<strlen(recenica); i++){
        chas = minuti = 0;
        brojChas = brojMin=0;
        if((isdigit(recenica[i])) && (isdigit(recenica[i+1])) && (recenica[i+2] == ':') && (isdigit(recenica[i+3])) && (isdigit(recenica[i+4]))){
            brojChas = 
            chas = recenica[i]*10+recenica[i+1];
            minuti = recenica[i+3]*10+recenica[i+4];
            printf("%d chas %d minuti\n, recenica[%d] = %d", chas, minuti, i, recenica[i]);
            if(chas > 23 || minuti > 59){
                printf("Vnese pogreshno vreme!\n");
                return -1;
            }
            if(chas > maxChas || (chas == maxChas && minuti > maxMinuti)){
                maxChas = chas;
                maxMinuti = minuti;
            }
            
        }
    }
    printf("Najdocniot termin e %d:%d\n", maxChas, maxMinuti);
    return 0;
}