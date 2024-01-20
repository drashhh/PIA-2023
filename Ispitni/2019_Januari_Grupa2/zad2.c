#include <stdio.h>
int main(){
    int mat1[100][100], mat2[100][100], pomMat[100][100], i, j, dolz1, dolz2, zname=1, brojac =0;
    printf("Vnesi ja dolzinata na prvata matrica > ");
    scanf("%d", &dolz1);

    printf("Vnesi ja dolzinata na vtorata matrica > ");
    scanf("%d", &dolz2);

    printf("Pocni so vnesuvanje na prvata matrica > \n");
    for(i=0; i < dolz1; i++){
        for(j=0; j< dolz1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Pocni so vnesuvanje na vtorata matrica > \n");
    for(i=0; i < dolz2; i++){
        for(j=0; j< dolz2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i=0; i<dolz1; i++){
        for(j=0; j<dolz1; j++){
            pomMat[dolz1-i-1][j] = mat1[i][j];
        }
    }

    for(i=0; i<dolz1; i++){
        for(j=0; j<dolz1; j++){
            if(pomMat[i][j] != mat2[i][j]){
                brojac++;
                zname = 0;
            }
        }
    }
    if(zname){
        printf("Uslovot e zadovolen!\n");
    }else{
        printf("Uslovot ne e zadovolen i nizite se razlikuvaat za %d elementi!\n", brojac);
    }
    return 0;
}
