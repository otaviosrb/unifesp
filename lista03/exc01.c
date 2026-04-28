#include <stdio.h>
#define MAX 100

int main() {
    int v[MAX], i;
    for (i=0; i<MAX; i++){
        scanf("%d", &v[i]);
    }
    for (i=MAX-1; i>=0; i--){
        printf("%d", v[MAX-1-i]);
    }
}