/*
Да се напише програма која добива 2 (дополнителни) аргументи од командна линија. 
Аргументите кои ги добива треба да бидат два збора (составени само од букви). Доколку 
не добие 2 (дополнителни) аргументи од командна линија, тогаш истите ги чита од 
тастатура. Програмата треба да пресмета колку исти букви имаат двата зборови на иста 
позиција. Пресметката да се прави со посебна функција, притоа да се земе во предвид 
дека зборовите се текстуални низи (нул-терминирани). Да се користат покажувачи за 
изминување на низите и проверка. 
Забелешка: Се користат аргументите нa main: argv[], argc.



*/

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