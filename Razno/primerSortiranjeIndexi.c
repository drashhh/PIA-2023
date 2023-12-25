#include <stdio.h>
void swap(int *a, int*b){
    int pom;
    pom = *a;
    *a = *b;
    *b = pom;
}
void Sortiraj(int *brojIndex, int *godini, int dolzina){
    int i, j;
    for(i=0; i<dolzina-1; i++){
        for(j=i+1; j<dolzina; j++){
            if(godini[i] > godini[j]){
                swap(&godini[i], &godini[j]);
                swap(&brojIndex[i], &brojIndex[j]);
            }else if(godini[i] == godini[j]){
                if(brojIndex[i] > brojIndex[j]){
                swap(&godini[i], &godini[j]);
                swap(&brojIndex[i], &brojIndex[j]);
                }
            }

        }

    }
}
int main(){
    int dolzina, brIndex[100], godina[100], i;
    printf("Vnesi ja dolzinata > ");
    scanf("%d", &dolzina);
    printf("Pocni so vnesuvanje na indexite so format broj/godina.\n");
    for(i=0; i<dolzina; i++){
        scanf("%d/%d", &brIndex[i], &godina[i]);
    }
    Sortiraj(brIndex, godina, dolzina);
    printf("Sortiranata niza > ");
    for(i = 0; i <dolzina; i++){
        printf("%d/%d; ", brIndex[i], godina[i]);
    }
    printf("\n");
    return 0;

}