#include <stdio.h>
int main(){
    int matrica[100][100], m, n , i, j;
    int matrica2[100][100];
    //n = i && m = j za ciklusi
    printf("Vnesi go N > ");
    scanf("%d", &n);
    printf("Vnesi go M > ");
    scanf("%d", &m);

    printf("Pocni so vnesuvanje na elementite > \n");
    for(i =0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("Pocni so vnesuvanje na vtorata matrica > \n");
    for(i =0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &matrica2[i][j]);
        }
    }


    int brojac =0;

    for(i =0; i<n; i++){
        for(j=0; j<m; j++){
            if(matrica[i][j] == matrica2[i][j]){
                printf("Vo pozicija [%d] [%d] clenovite imaat ista vrednost.\n", i , j);
                brojac++;
            }
        }
    }
    

    printf("Ima vkupno %d clenovi koi se isti\n", brojac);
    return 0;
}