#include <stdio.h>
int main(){
    int A[10][10], i, j, m, n, k;
    int controla, brP;
    printf("Vnesi gi m i n \n");
    scanf("%d%d", &m, &n);
    printf("Vnesi gi elementite \n");
    for(i =0 ; i<m; i++){
        for(j=0; j<n;j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(k=0; k<n; k++){
        controla =1;
        for(i = 1; i<m; i++){
            brP = 0;
            for(j=0; j<n; j++){
                if(A[i][j]==A[0][k])
                    brP++;
            }
            if(brP == 0){
                controla =0; 
                break;
            }
        }
        if(controla == 1){
            printf("Elementot %d se pojavuva vo sekoj red.\n", A[0][k]);
        }
    }
    return 0;
}