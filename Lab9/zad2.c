/*
Да се напише функција која како аргументи добива 2 текстуални низи. Функцијата треба,
на крајот од подолгата низа да ја додаде пократката низа и како трет аргумент да ја врати
ново-формираната текстуална низа (влезните низи не се менуваат).
Да се напише главна програма која ќе дозволи внесување на 2 текстуални низи од тастатура.
Најпрво, од двете низи се отстрануваат сите знаци кои не се букви и така променети се праќаат
на функцијата. Ново-формираната низа се печати на екран
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void procistuvanje(char *niza){
    int i;
    int j=0;
    for(i=0; niza[i] != '\0'; i++){
        if(isalpha(niza[i])){
            niza[j++] = niza[i];
        }
    }
    niza[j] = '\0';
}
void spoj(char *niza1, char *niza2, char *niza3){
    int dolz1, dolz2;
    dolz1 = strlen(niza1);
    dolz2 = strlen(niza2);
    if(dolz1 > dolz2){
        strcpy(niza3, niza1);
        strcat(niza3, niza2);
    }else{
        strcpy(niza3, niza2);
        strcat(niza3, niza1);
    }
}
int main(){
    char niza1[100], niza2[100], niza3[200];
    int i;
    printf("Vnesi ja prvata niza > ");
    scanf("%s", niza1);
    printf("Vnesi ja vtorata niza > ");
    scanf("%s", niza2);

    int dolz1 = strlen(niza1);
    int dolz2 = strlen(niza2);
    procistuvanje(niza1);
    procistuvanje(niza2);

    spoj(niza1, niza2, niza3);
    printf("Prvata niza e > %s\n", niza1);
    printf("Vtorata niza e > %s\n", niza2);
    printf("Spoenata niza e > %s\n", niza3);

}