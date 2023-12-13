#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float sredVred, suma=0, niza[100];

    printf("Kolku element sakas da vneses > ");
    scanf("%d", &n);

    printf("Pocni so vnesuvanje na elementite > \n");
    for(int i=0; i<n; i++){
        scanf("%f", &niza[i]);
    }
    for(int i=0; i<n;i++){
        suma+=niza[i];
    }
    //printf("Suma > %.2f", suma);
    sredVred = suma / n;
    printf("Sredna vrednost > %.2f\n", sredVred);
    printf("Absolutna razlika > \n");
    for(int i=0; i<n;i++){
        float rez = fabs(niza[i]-sredVred);
        printf("%.2f\n", rez);
    }
    return 0;
}