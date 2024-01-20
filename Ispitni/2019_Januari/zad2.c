#include <stdio.h>
int main(){
    int dolz,i,j, zname=0;
    int A[10][10], B[10][10], C[10][10];

    printf("Vnesi ja dolzinata n > ");
    scanf("%d", &dolz);

    printf("Pocni so vnesuvanje na prvata niza > ");
    for(i=0; i<dolz; i++){
        for(j=0; j<dolz; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Pocni so vnesuvanje na vtorata niza > ");
    for(i=0; i<dolz; i++){
        for(j=0; j<dolz; j++){
            scanf("%d", &B[i][j]);
        }
    }

    //Transponiranje na nizata
    printf("Transponiranje na nizata A > \n");
    for(i=0; i<dolz; i++){
        for(j=0; j<dolz; j++){
            C[i][j] = A[j][i];
        }
    }

    printf("\nTransponirana niza > \n");
    for(i=0; i<dolz; i++){
        for(j=0; j<dolz; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<dolz; i++){
        for(j=0; j<dolz; j++){
            if(B[i][j] == C[i][j]){
                zname = 1;
            }
        }
    }

    if(zname){
        printf("Koga se transpozira se dobiva istata niza!\n");
    }
    else printf("Ne se dobiva istata niza!");
    return 0;
}