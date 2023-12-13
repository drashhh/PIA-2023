#include <stdio.h>
int main(){
    int matrica[100][100], m, n , i, j;
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

    float sredVred, suma=0;
    int clenovi, brojac = 0;
    clenovi = m * n;
    
    for(i =0; i<n; i++){
        for(j=0; j<m; j++){
            suma+=matrica[i][j];
        }
    }
    sredVred = suma / clenovi;
    printf("Clenovi pogolemi od sredVred > \n");
    for(i =0; i<n; i++){
        for(j=0; j<m; j++){
            if(matrica[i][j] > sredVred){
                printf("%d ", matrica[i][j]);
                brojac++;
            }
        }
        printf("\n");
    }
    printf("Ima vkupno %d clenovi koi se pogolemi od sredVred\n", brojac);
    return 0;
}