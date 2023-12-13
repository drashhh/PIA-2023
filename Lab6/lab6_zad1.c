#include <stdio.h>
int main(){
    int niza[100];
    int n, min = 99999, max = -1, minPos, maxPos;
    float sredVred,  suma=0;
    printf("Kolku clena sakas da vneses vo nizata? > ");
    scanf("%d", &n);

    printf("Pocni so vnesuvanje na clenovite > ");
    for(int i=0; i<n; i++){
        scanf("%d", &niza[i]);
    }

    //For za sredna vrednost
    for(int i=0; i<n; i++){
        suma+=niza[i];
        if(min > niza[i]){
            min = niza[i];
            minPos = i;
        }
        if(max < niza[i]){
            max = niza[i];
            maxPos=i;
        }
    }
    printf("Suma > %d n > %d", suma, n);
    sredVred = suma/n;
    printf("Sredna vrednost > %.2f\nMinimalen element > %d\nMaksimalen element > %d\n", sredVred, min, max);

    if(minPos < maxPos){
        printf("Clenovi izmegju ");
        for(int i = minPos+1; i < maxPos; i++){
            printf("%d", niza[i]);
        }
    }

    return 0;
}