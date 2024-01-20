#include <stdio.h>
void otfrlanjeClen(int *niza1, int *niza2, int *dolz1, int dolz2){
    int i, j, novaDolz, pomDolz;
    int pomNiza[100];
    novaDolz = *dolz1;
    pomDolz = *dolz1;
    for(i=0; i<pomDolz; i++){
        pomNiza[i] = niza1[i];
    }
    for(i =0; i<pomDolz; i++){
        if(niza1[i] == niza2[i]){
            for(j=i; j < pomDolz-1; j++){
                pomNiza[j] = pomNiza[j+1];
            }
            novaDolz--;
        }
    }
    for(i=0; i<novaDolz; i++){
        niza1[i] = pomNiza[i];
    }
    *dolz1 = novaDolz;

}
int main(){
    int niza1[100], niza2[100], dolz1, dolz2, i, j;
    printf("Vnesi ja dolzinata na prvata niza > ");
    scanf("%d", &dolz1);
    printf("Vnesi ja dolzinata na vtorata niza > ");
    scanf("%d", &dolz2);

    printf("Pocni so vnesuvanje na niza1 > ");
    for(i=0; i<dolz1; i++){
        scanf("%d", &niza1[i]);
    }
    printf("Pocni so vnesuvanje na niza2 > ");
    for(i=0; i<dolz2; i++){
        scanf("%d", &niza2[i]);
    }

    otfrlanjeClen(&niza1, &niza2, &dolz1, dolz2);
    printf("Niza 1 > ");
    for(i =0; i < dolz1; i++){
        printf("%d ", niza1[i]);
    }
    printf("\nSo dolzina %d\n", dolz1);
    return 0;
}