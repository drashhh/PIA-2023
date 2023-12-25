#include <stdio.h>
void sortirajVisina(int *tezina, int *visina, int d){
    int i ,j, pom, poz;
    for(i=0; i<d-1; i++){
        poz = i;
        for(j=i+1; j<d; j++){
            if(visina[poz] > visina[j])
                poz=j;
        }
        pom=visina[poz];
        visina[poz]= visina[i];
        visina[i]=pom;
        pom=tezina[poz];
        tezina[poz] = tezina[i];
        tezina[i]= pom;
    }

}
int main(){
    int visina[100], tezina[100], brLugje, i, kukjaStoi = 1;
    printf("Vnesi kolku lugje ima > ");
    scanf("%d", &brLugje);
    printf("Pocni so vnesuvanje na tezina > \n");
    for(i = 0; i < brLugje; i++){
        scanf("%d", &tezina[i]);
    }
    printf("Pocni so vnesuvanje na visina > \n");
    for(i = 0; i < brLugje; i++){
        scanf("%d", &visina[i]);
    }

    sortirajVisina(&visina,&tezina, brLugje);
    
}