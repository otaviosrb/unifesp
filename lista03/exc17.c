#include <stdio.h>
#define MAX 10

int main(){
    int V[MAX], i, j, k, num;
    scanf("%d", &V[0]);
    for (i=1; i<MAX; i++){
        scanf("%d", &num);
        for (j=0; j<i; j++){
            if (num < V[j]){
                for (k=i; k>j; k--){
                    V[k] = V[k-1];
                }
            }
        }
        V[j] = num;
    }


    return 0;
}