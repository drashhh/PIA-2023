/* 
Да се напише функција која како аргумент добива низа од цели броеви, должина на низата
N. Функцијата треба да ги најде најголемиот и најмалиот елемент од низата и да ги врати,
како и позициите на кои се наоѓаат истите. Потоа, да се напише главна програма во која ќ е
се внесе N (не повеќ е од 100) и низата од елементи. Потоа, од главната програма да се
повика функцијата и по завршување на функцијата, главната програма да ги отпечати на
екран елементите кои се помеѓу најмалиот и најголемиот елемент во низата (вклучително
и најмалиот и најголемиот елемент).
*/
#include <stdio.h>
void funk(int *niza, int dolzina, int *min, int *max){
    int maxVred = 0, minVred = 999999;
    for(int i = 0; i < dolzina; i++){
        if(*(niza+i) > maxVred){
            maxVred = *(niza+i);
            *max = i;
        }
        if(*(niza+i) < minVred){
            minVred = *(niza+i);
            *min = i;
        }
    }
}
int main(){
    int niza[100], n, min, max;
    printf("Vnesi ja dolzinata > ");
    scanf("%d", &n);

    printf("Pocni so vnesuvanje na elemntite > \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &niza[i]);
    }

    funk(&niza, n, &min, &max);
    printf("Min clen e %d na pozicija %d\n", niza[min], min);
    printf("Max clen e %d na pozicija %d\n", niza[max], max);

    if(min < max){
        printf("Elemtite izmegju > \n");
        for(int i = min; i <=max; i++){
            printf("%d ", niza[i]);
        }
    }
    return 0;
}   