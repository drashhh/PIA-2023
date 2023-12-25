#include <stdio.h>
void transformacija(int *nizaA, int*nizaB, int *nizaC, int dolzina1, int dolzina2, int* brojac){
    int maxClenovi = dolzina1 + dolzina2;
    for(int i = 0; i < maxClenovi; i++){
        if(i<dolzina1){
            nizaC[i] = nizaA[i];
        }
        if(i >= dolzina1){
            nizaC[i]= nizaB[i-dolzina1];
        }

    }

    for(int i =0; i < maxClenovi; i++){
        for(int k = i+1; k < maxClenovi; k++){
            if(nizaC[i] == nizaC[k]){
                for(int j = k; j < maxClenovi-1; j++){
                    nizaC[j] = nizaC[j+1];
                }
                maxClenovi--;
                brojac++;
                k--;
            }

        }

    }

}
int main(){
    int nizaA[100], nizaB[100], nizaC[100], n, m, i, j, brojac=0;
    printf("Vnesi gi n i m > ");
    scanf("%d %d", &n, &m);

    printf("Pocni so vnesuvanje na prvata niza > \n");
    for(i =0; i< n; i++){
        scanf("%d", &nizaA[i]);
    }
    printf("Pocni so vnesuvanje na vtorata niza > \n");
    for(i =0; i< m; i++){
        scanf("%d", &nizaB[i]);
    }
    
    transformacija(&nizaA, &nizaB, &nizaC, n, m, &brojac);

    printf("Niza C > \n");
    for(i=0; i<((n+m)-brojac); i++){
        printf("%d ", nizaC[i]);
    }
}