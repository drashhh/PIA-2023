#include <stdio.h>
int main(){
    int niza[100], i, j, suma=0, dolz;
    printf("Vnesi ja dolzinata > ");
    scanf("%d", &dolz);

    printf("Pocni so vnesuvanje na nizata > ");
    for(i=0; i<dolz; i++)
        scanf("%d", &niza[i]);

    printf("Nizata pred kastenje > ");
    for(i=0; i<dolz; i++)
        printf("%d ", niza[i]);

    printf("\nDolzinata iznesuva > %d\n", dolz);
    for(i=0; i<dolz; i++){
        suma = 0;
        for(j=0; j < i; j++){
            suma += niza[j];
        }

        if(niza[i] > suma){
           // printf("Element %d i %d suma %d\n", niza[i], i , suma);
            if(i == 0) continue;
            for(j=i; j < dolz; j++){
                niza[j] = niza[j+1];
            }
            dolz--;
        }
    }

    printf("Novata niza > ");
    for(i=0; i<dolz; i++){
        printf("%d ", niza[i]);
    }
    printf("\nNovata dolzina > %d", dolz);

    return 0;
}