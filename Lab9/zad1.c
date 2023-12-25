#include <stdio.h>
#include <string.h>
int funk(char *niza1, char*niza2){
    int pomalNiza, brojac =0;
    pomalNiza = strlen(niza1);
    if(pomalNiza > strlen(niza2))
        pomalNiza = strlen(niza2);

    for(int i =0; i <= pomalNiza; i++){
        if(*(niza1+i) == *(niza2+i)){
            brojac++;
        }
    }
    return brojac;
}
int main(int argc, char *argv[]){
    int i;
    char arg1[100];
    char arg2[100];

    switch(argc){
        case 1:
            printf("Nemas dovolno argumenti!!\n");
            printf("Pocni so vnesuvanje od tastatura > ");
            scanf("%s %s", arg1, arg2);
            break;
        case 2:
            printf("Imas samo eden argument!\n");
            printf("Vnesi uste eden argument od tastatura > ");
            strcpy(arg1,argv[1]);
            scanf("%s", arg2);
            break;
        case 3:
            strcpy(arg1, argv[1]);
            strcpy(arg2, argv[2]);
            break;
    }

    printf("\nArgumentite se %s %s\n", arg1, arg2);

    int brojac = funk(arg1, arg2); 
    printf("Vkupniot broj na bukvi koi se isti e > %d\n", brojac);
    return 0;
}