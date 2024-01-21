#include <stdio.h>
int main(int argc, char *argv[]){
    FILE *vlez, *izlez;
    int A[10][10], i, j, m, n;
    vlez = fopen(argv[1], "r");
    izlez = fopen(argv[2], "w");
    if(vlez == NULL || izlez == NULL){
        printf("Greshka \n");
        return -1;
    }

    fscanf(vlez, "%d%d", &m, &n);
    for(i=0; i<m;i++){
        for(j=0; j<n; j++){
            fscanf(vlez, "%d", A[i][j]);
        }
    }
    fclose(vlez);
    fclose(izlez);


}