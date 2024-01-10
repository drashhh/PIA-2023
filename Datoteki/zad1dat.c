#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    FILE *vlezna;
    char c, zbor[100];
    int samoglaski =0, soglaski =0;
    if((vlezna = fopen(argv[1], "r"))==NULL){
        printf("Datotekata %s losho se otvori\n", argv[1]);
        return -1;
    }
    while((c=fgetc(vlezna))!= EOF){
        if(isalpha(c)){
            c = toupper(c);
            if(c == 'A' || c == 'E' || c == 'I'|| c == 'U' || c== 'O'){
                samoglaski++;
            }
            else
                soglaski++;
        }


    } 
    

    fclose(vlezna);
    printf("Brojot na samoglaski e %d, dodeka brojot na soglaski e %d\n", samoglaski, soglaski);
    return 0;

}