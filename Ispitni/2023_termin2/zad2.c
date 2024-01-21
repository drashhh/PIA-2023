#include <stdio.h>
int main(){
    int A[10][10], B[10][10], C[10][10], i, j,dolz;
    int pom,pom2;
    printf("Vnesi ja dolzinata > ");
    scanf("%d", &dolz);
    printf("Pocni so vnesuvanje na prvata mat > \n");
    for(i=0; i<dolz; i++){
        for(j=0; j < dolz; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Pocni so vnesuvanje na vtorata mat > \n");
    for(i=0; i<dolz; i++){
        for(j=0; j < dolz; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0; i<dolz; i++){
        for(j=0; j < dolz; j++){
            C[i][j] = 0;
        }
    }
    
    for(i=0; i<dolz; i++){
        for(j=0; j < dolz; j++){
            for(pom=0; pom<dolz; pom++){
                for(pom2=0; pom2<dolz; pom2++){
                    if(A[i][j] == B[pom][pom2]){
                        C[pom][pom2] = B[pom][pom2];
                    }else{
                       C[i][j] = A[i][j];
                    }
                }
            }
        }
    }
    printf("Niza C >\n");
    for(i=0; i<dolz; i++){
        for(j=0; j < dolz; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}