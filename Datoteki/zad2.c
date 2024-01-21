#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *vlez, *izlez;
    char red[20];
    int d, i;
    if(argc != 3){
        printf("Potrebni se 3 argumenti!");
        return -1;
    }
    vlez = fopen(argv[1], "r");
    izlez = fopen(argv[2], "w");
    if(vlez == NULL || izlez == NULL){
        printf("Problem so datotekite\n");
        return -1;
    }

    while(fgets(red, 19, vlez) != NULL){
        d = strlen(red);
        fprintf(izlez, "%s", red);
        for(i=0; i < d && red[i] != '\n'; i++){
            switch (red[i]){
            case '0':
                fprintf(izlez, "%s", "-nula");
                break;
            case '1':
                fprintf(izlez, "%s", "-eden");
                break;
            case '2':
                fprintf(izlez, "%s", "-dva");
                break;
            case '3':
                fprintf(izlez, "%s", "-tri");
                break;
            case '4':
                fprintf(izlez, "%s", "-cetiri");
                break;
            case '5':
                fprintf(izlez, "%s", "-pet");
                break;
            case '6':
                fprintf(izlez, "%s", "-sest");
                break;
            case '7':
                fprintf(izlez, "%s", "-sedum");
                break;
            case '8':
                fprintf(izlez, "%s", "-osum");
                break;
            case '9':
                fprintf(izlez, "%s", "-devet");
                break;
            default:
    
                break;
            }
        }

        
    }
    fclose(vlez);
    fclose(izlez);
    return 0;
}